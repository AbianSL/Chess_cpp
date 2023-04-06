#/bin/bash
# Date: 2023-01-10
# Author: Abian Santana Ledesma
# Brief: That program create the build folder and compile the program
#        It can also delete the files with the option -d

### Styles

TEXT_RESET=$(tput sgr0)
TEXT_BOLD=$(tput bold)

# Colors
TEXT_GREEN=$(tput setaf 2)
TEXT_RED=$(tput setaf 1)
TEXT_YELLOW=$(tput setaf 3)
TEXT_BLUE=$(tput setaf 4)
TEXT_PURPLE=$(tput setaf 5)
TEXT_BRONZE='\e[0;33m'

### main functionality

if [ "$1" = "-d" ]; then
  echo "${TEXT_BOLD}${TEXT_RED}Deleting the build folder${TEXT_RESET}"  
  rm -rf build
  exit 0
fi

if [ ! -d "build" ]; then
  echo "${TEXT_BOLD}${TEXT_GREEN}Creating the build folder${TEXT_RESET}"
  mkdir build
fi

cd build
echo "${TEXT_BOLD}${TEXT_GREEN}Compiling the program${TEXT_RESET}"
cmake ..
if [ "$(echo $?)" != "0" ]; then
  echo "${TEXT_BOLD}${TEXT_RED}ERROR: in cmake file, it give an error building the makefile${TEXT_RESET}"
  exit 1
fi

make
if [ "$(echo $?)" != "0" ]; then
  echo "${TEXT_BOLD}${TEXT_RED}ERROR: in make file, it give an error in compilation${TEXT_RESET}"
  exit 1
fi
