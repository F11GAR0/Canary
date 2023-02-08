#pragma once
#include <string>
#include <fstream>
#include <streambuf>
#include <iosfwd>
#include <iostream>
#include <ostream>
#include <algorithm>
#include <functional>

#include "CLexicalAnalizer.h"
#include "CCompile.h"

#include "..\Library\SCommand.h"

#include "../LogLibrary/CLog.h"
#include "../Library/Types.h"
#include <sstream> 

using std::exception;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::vector;
using std::basic_ostream;
using std::basic_istream;
using std::char_traits;
using std::string;
using std::ios_base;
using std::ostringstream;