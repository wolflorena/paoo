# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.28.0/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.28.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/wolflorena/paoo/paoo/test/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/wolflorena/paoo/paoo/test/build

# Include any dependencies generated for this target.
include Mutex/CMakeFiles/Mutex.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Mutex/CMakeFiles/Mutex.dir/compiler_depend.make

# Include the progress variables for this target.
include Mutex/CMakeFiles/Mutex.dir/progress.make

# Include the compile flags for this target's objects.
include Mutex/CMakeFiles/Mutex.dir/flags.make

Mutex/CMakeFiles/Mutex.dir/Mutex.cpp.o: Mutex/CMakeFiles/Mutex.dir/flags.make
Mutex/CMakeFiles/Mutex.dir/Mutex.cpp.o: /Users/wolflorena/paoo/paoo/test/src/Mutex/Mutex.cpp
Mutex/CMakeFiles/Mutex.dir/Mutex.cpp.o: Mutex/CMakeFiles/Mutex.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/wolflorena/paoo/paoo/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Mutex/CMakeFiles/Mutex.dir/Mutex.cpp.o"
	cd /Users/wolflorena/paoo/paoo/test/build/Mutex && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Mutex/CMakeFiles/Mutex.dir/Mutex.cpp.o -MF CMakeFiles/Mutex.dir/Mutex.cpp.o.d -o CMakeFiles/Mutex.dir/Mutex.cpp.o -c /Users/wolflorena/paoo/paoo/test/src/Mutex/Mutex.cpp

Mutex/CMakeFiles/Mutex.dir/Mutex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Mutex.dir/Mutex.cpp.i"
	cd /Users/wolflorena/paoo/paoo/test/build/Mutex && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wolflorena/paoo/paoo/test/src/Mutex/Mutex.cpp > CMakeFiles/Mutex.dir/Mutex.cpp.i

Mutex/CMakeFiles/Mutex.dir/Mutex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Mutex.dir/Mutex.cpp.s"
	cd /Users/wolflorena/paoo/paoo/test/build/Mutex && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wolflorena/paoo/paoo/test/src/Mutex/Mutex.cpp -o CMakeFiles/Mutex.dir/Mutex.cpp.s

# Object files for target Mutex
Mutex_OBJECTS = \
"CMakeFiles/Mutex.dir/Mutex.cpp.o"

# External object files for target Mutex
Mutex_EXTERNAL_OBJECTS =

Mutex/libMutex.a: Mutex/CMakeFiles/Mutex.dir/Mutex.cpp.o
Mutex/libMutex.a: Mutex/CMakeFiles/Mutex.dir/build.make
Mutex/libMutex.a: Mutex/CMakeFiles/Mutex.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/wolflorena/paoo/paoo/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libMutex.a"
	cd /Users/wolflorena/paoo/paoo/test/build/Mutex && $(CMAKE_COMMAND) -P CMakeFiles/Mutex.dir/cmake_clean_target.cmake
	cd /Users/wolflorena/paoo/paoo/test/build/Mutex && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Mutex.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Mutex/CMakeFiles/Mutex.dir/build: Mutex/libMutex.a
.PHONY : Mutex/CMakeFiles/Mutex.dir/build

Mutex/CMakeFiles/Mutex.dir/clean:
	cd /Users/wolflorena/paoo/paoo/test/build/Mutex && $(CMAKE_COMMAND) -P CMakeFiles/Mutex.dir/cmake_clean.cmake
.PHONY : Mutex/CMakeFiles/Mutex.dir/clean

Mutex/CMakeFiles/Mutex.dir/depend:
	cd /Users/wolflorena/paoo/paoo/test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wolflorena/paoo/paoo/test/src /Users/wolflorena/paoo/paoo/test/src/Mutex /Users/wolflorena/paoo/paoo/test/build /Users/wolflorena/paoo/paoo/test/build/Mutex /Users/wolflorena/paoo/paoo/test/build/Mutex/CMakeFiles/Mutex.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Mutex/CMakeFiles/Mutex.dir/depend

