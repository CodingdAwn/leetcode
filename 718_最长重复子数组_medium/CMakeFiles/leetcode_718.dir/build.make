# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.17.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.17.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/gaoxifeng/dawn/leetcode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/gaoxifeng/dawn/leetcode

# Include any dependencies generated for this target.
include 718_最长重复子数组/CMakeFiles/leetcode_718.dir/depend.make

# Include the progress variables for this target.
include 718_最长重复子数组/CMakeFiles/leetcode_718.dir/progress.make

# Include the compile flags for this target's objects.
include 718_最长重复子数组/CMakeFiles/leetcode_718.dir/flags.make

718_最长重复子数组/CMakeFiles/leetcode_718.dir/main.cpp.o: 718_最长重复子数组/CMakeFiles/leetcode_718.dir/flags.make
718_最长重复子数组/CMakeFiles/leetcode_718.dir/main.cpp.o: 718_最长重复子数组/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gaoxifeng/dawn/leetcode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object 718_最长重复子数组/CMakeFiles/leetcode_718.dir/main.cpp.o"
	cd /Users/gaoxifeng/dawn/leetcode/718_最长重复子数组 && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/leetcode_718.dir/main.cpp.o -c /Users/gaoxifeng/dawn/leetcode/718_最长重复子数组/main.cpp

718_最长重复子数组/CMakeFiles/leetcode_718.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/leetcode_718.dir/main.cpp.i"
	cd /Users/gaoxifeng/dawn/leetcode/718_最长重复子数组 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/gaoxifeng/dawn/leetcode/718_最长重复子数组/main.cpp > CMakeFiles/leetcode_718.dir/main.cpp.i

718_最长重复子数组/CMakeFiles/leetcode_718.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/leetcode_718.dir/main.cpp.s"
	cd /Users/gaoxifeng/dawn/leetcode/718_最长重复子数组 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/gaoxifeng/dawn/leetcode/718_最长重复子数组/main.cpp -o CMakeFiles/leetcode_718.dir/main.cpp.s

# Object files for target leetcode_718
leetcode_718_OBJECTS = \
"CMakeFiles/leetcode_718.dir/main.cpp.o"

# External object files for target leetcode_718
leetcode_718_EXTERNAL_OBJECTS =

718_最长重复子数组/leetcode_718: 718_最长重复子数组/CMakeFiles/leetcode_718.dir/main.cpp.o
718_最长重复子数组/leetcode_718: 718_最长重复子数组/CMakeFiles/leetcode_718.dir/build.make
718_最长重复子数组/leetcode_718: 718_最长重复子数组/CMakeFiles/leetcode_718.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/gaoxifeng/dawn/leetcode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable leetcode_718"
	cd /Users/gaoxifeng/dawn/leetcode/718_最长重复子数组 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/leetcode_718.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
718_最长重复子数组/CMakeFiles/leetcode_718.dir/build: 718_最长重复子数组/leetcode_718

.PHONY : 718_最长重复子数组/CMakeFiles/leetcode_718.dir/build

718_最长重复子数组/CMakeFiles/leetcode_718.dir/clean:
	cd /Users/gaoxifeng/dawn/leetcode/718_最长重复子数组 && $(CMAKE_COMMAND) -P CMakeFiles/leetcode_718.dir/cmake_clean.cmake
.PHONY : 718_最长重复子数组/CMakeFiles/leetcode_718.dir/clean

718_最长重复子数组/CMakeFiles/leetcode_718.dir/depend:
	cd /Users/gaoxifeng/dawn/leetcode && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/gaoxifeng/dawn/leetcode /Users/gaoxifeng/dawn/leetcode/718_最长重复子数组 /Users/gaoxifeng/dawn/leetcode /Users/gaoxifeng/dawn/leetcode/718_最长重复子数组 /Users/gaoxifeng/dawn/leetcode/718_最长重复子数组/CMakeFiles/leetcode_718.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : 718_最长重复子数组/CMakeFiles/leetcode_718.dir/depend

