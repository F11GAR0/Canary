#include "main.h"

/**
 * @brief Compile.exe file.asm file.bin
 */
int main(int argc, char * argv[], char * env[])
{
   int exitCode = 0;
   if (argc == 3)
   {
      LOG_INITIALIZE(string(argv[0]) + ".log");
      try
      {
         ifstream file(argv[1]);
         if (file.is_open())
         {
            // todo подумать об исключение! об ошибке!
            const vector<NPeProtector::SCommand> & commands = NPeProtector::compile(file);

            ofstream binFile(argv[2], ios_base::binary);

            NPeProtector::serialize(binFile, commands);
         }
         else
         {
            exitCode = 1;
            printf("error: can't open file %s", argv[1]);
         }
      }
      catch (const exception & e)
      {
         cout << e.what();
      }
   }
   else
   {
      printf("Compile.exe file.asm file.bin");
   }
   
   return exitCode;
}
