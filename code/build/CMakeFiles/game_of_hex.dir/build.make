# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/cmake/1378/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1378/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/tawfiq/C++ projects/game of hex/code"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/tawfiq/C++ projects/game of hex/code/build"

# Include any dependencies generated for this target.
include CMakeFiles/game_of_hex.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/game_of_hex.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/game_of_hex.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/game_of_hex.dir/flags.make

CMakeFiles/game_of_hex.dir/game_of_hex.cpp.o: CMakeFiles/game_of_hex.dir/flags.make
CMakeFiles/game_of_hex.dir/game_of_hex.cpp.o: /home/tawfiq/C++\ projects/game\ of\ hex/code/game_of_hex.cpp
CMakeFiles/game_of_hex.dir/game_of_hex.cpp.o: CMakeFiles/game_of_hex.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/tawfiq/C++ projects/game of hex/code/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/game_of_hex.dir/game_of_hex.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/game_of_hex.dir/game_of_hex.cpp.o -MF CMakeFiles/game_of_hex.dir/game_of_hex.cpp.o.d -o CMakeFiles/game_of_hex.dir/game_of_hex.cpp.o -c "/home/tawfiq/C++ projects/game of hex/code/game_of_hex.cpp"

CMakeFiles/game_of_hex.dir/game_of_hex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/game_of_hex.dir/game_of_hex.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/tawfiq/C++ projects/game of hex/code/game_of_hex.cpp" > CMakeFiles/game_of_hex.dir/game_of_hex.cpp.i

CMakeFiles/game_of_hex.dir/game_of_hex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/game_of_hex.dir/game_of_hex.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/tawfiq/C++ projects/game of hex/code/game_of_hex.cpp" -o CMakeFiles/game_of_hex.dir/game_of_hex.cpp.s

CMakeFiles/game_of_hex.dir/classes.cpp.o: CMakeFiles/game_of_hex.dir/flags.make
CMakeFiles/game_of_hex.dir/classes.cpp.o: /home/tawfiq/C++\ projects/game\ of\ hex/code/classes.cpp
CMakeFiles/game_of_hex.dir/classes.cpp.o: CMakeFiles/game_of_hex.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/tawfiq/C++ projects/game of hex/code/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/game_of_hex.dir/classes.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/game_of_hex.dir/classes.cpp.o -MF CMakeFiles/game_of_hex.dir/classes.cpp.o.d -o CMakeFiles/game_of_hex.dir/classes.cpp.o -c "/home/tawfiq/C++ projects/game of hex/code/classes.cpp"

CMakeFiles/game_of_hex.dir/classes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/game_of_hex.dir/classes.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/tawfiq/C++ projects/game of hex/code/classes.cpp" > CMakeFiles/game_of_hex.dir/classes.cpp.i

CMakeFiles/game_of_hex.dir/classes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/game_of_hex.dir/classes.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/tawfiq/C++ projects/game of hex/code/classes.cpp" -o CMakeFiles/game_of_hex.dir/classes.cpp.s

# Object files for target game_of_hex
game_of_hex_OBJECTS = \
"CMakeFiles/game_of_hex.dir/game_of_hex.cpp.o" \
"CMakeFiles/game_of_hex.dir/classes.cpp.o"

# External object files for target game_of_hex
game_of_hex_EXTERNAL_OBJECTS =

game_of_hex: CMakeFiles/game_of_hex.dir/game_of_hex.cpp.o
game_of_hex: CMakeFiles/game_of_hex.dir/classes.cpp.o
game_of_hex: CMakeFiles/game_of_hex.dir/build.make
game_of_hex: CMakeFiles/game_of_hex.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/home/tawfiq/C++ projects/game of hex/code/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable game_of_hex"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/game_of_hex.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/game_of_hex.dir/build: game_of_hex
.PHONY : CMakeFiles/game_of_hex.dir/build

CMakeFiles/game_of_hex.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/game_of_hex.dir/cmake_clean.cmake
.PHONY : CMakeFiles/game_of_hex.dir/clean

CMakeFiles/game_of_hex.dir/depend:
	cd "/home/tawfiq/C++ projects/game of hex/code/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/tawfiq/C++ projects/game of hex/code" "/home/tawfiq/C++ projects/game of hex/code" "/home/tawfiq/C++ projects/game of hex/code/build" "/home/tawfiq/C++ projects/game of hex/code/build" "/home/tawfiq/C++ projects/game of hex/code/build/CMakeFiles/game_of_hex.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/game_of_hex.dir/depend
