// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

#include <string>

const std::string windowsAsciiArt = "\n _    _       _ ____  _ _  \n"
                                    "  | |  | |     (_)  _ \(_) | \n"
                                    "  | |  | |_ __  _| |_) |_| |_ \n"
                                    "  | |  | | '_ \| |  _ <| | __|\n"
                                    "  | |__| | | | | | |_) | | |_ \n"
                                    "   \____/|_| |_|_|____/|_|\__|\n";

const std::string nonWindowsAsciiArt =
    "   __  __      _ ____  _ __ \n                                                                            \n"
    "  / / / /___  (_) __ )(_) /_\n"
    " / / / / __ \/ / __  / / __/\n"
    "/ /_/ / / / / / /_/ / / /_  \n"
    "\____/_/ /_/_/_____/_/\__/  \n"
    "                            \n"
    "                            \n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32

const std::string asciiArt = windowsAsciiArt;

#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
