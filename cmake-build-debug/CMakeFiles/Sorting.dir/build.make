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
CMAKE_COMMAND = /home/tanmaygairola/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/202.6397.106/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/tanmaygairola/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/202.6397.106/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tanmaygairola/CLionProjects/Sorting

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tanmaygairola/CLionProjects/Sorting/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Sorting.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Sorting.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sorting.dir/flags.make

CMakeFiles/Sorting.dir/radixsort.cpp.o: CMakeFiles/Sorting.dir/flags.make
CMakeFiles/Sorting.dir/radixsort.cpp.o: ../radixsort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tanmaygairola/CLionProjects/Sorting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Sorting.dir/radixsort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Sorting.dir/radixsort.cpp.o -c /home/tanmaygairola/CLionProjects/Sorting/radixsort.cpp

CMakeFiles/Sorting.dir/radixsort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sorting.dir/radixsort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tanmaygairola/CLionProjects/Sorting/radixsort.cpp > CMakeFiles/Sorting.dir/radixsort.cpp.i

CMakeFiles/Sorting.dir/radixsort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sorting.dir/radixsort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tanmaygairola/CLionProjects/Sorting/radixsort.cpp -o CMakeFiles/Sorting.dir/radixsort.cpp.s

# Object files for target Sorting
Sorting_OBJECTS = \
"CMakeFiles/Sorting.dir/radixsort.cpp.o"

# External object files for target Sorting
Sorting_EXTERNAL_OBJECTS =

Sorting: CMakeFiles/Sorting.dir/radixsort.cpp.o
Sorting: CMakeFiles/Sorting.dir/build.make
Sorting: CMakeFiles/Sorting.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tanmaygairola/CLionProjects/Sorting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Sorting"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Sorting.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sorting.dir/build: Sorting

.PHONY : CMakeFiles/Sorting.dir/build

CMakeFiles/Sorting.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Sorting.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Sorting.dir/clean

CMakeFiles/Sorting.dir/depend:
	cd /home/tanmaygairola/CLionProjects/Sorting/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tanmaygairola/CLionProjects/Sorting /home/tanmaygairola/CLionProjects/Sorting /home/tanmaygairola/CLionProjects/Sorting/cmake-build-debug /home/tanmaygairola/CLionProjects/Sorting/cmake-build-debug /home/tanmaygairola/CLionProjects/Sorting/cmake-build-debug/CMakeFiles/Sorting.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Sorting.dir/depend
