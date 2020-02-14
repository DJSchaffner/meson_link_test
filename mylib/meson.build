project('mylib', ['cpp', 'c'])

cc = meson.get_compiler('c')

# Source files for building
mylib_src = files([ 'src/mylib.cpp' ])

# Source files to exclude from install directory (All, since we only want the headers)
mylib_src_exclude = [ 'mylib.cpp' ]

# Directory definitions
dir_base = meson.current_source_dir()
dir_lib = join_paths(dir_base, 'lib')
dir_install = join_paths(dir_base, 'build/meson-out/mylib')
dir_header_install = join_paths(dir_install, 'include')
mylib_inc = include_directories('include')

# Library definition
lib_freetype = cc.find_library('freetype', dirs: dir_lib, required: true)

# The install instructions creates a folder that can be used as a subproject
static_library( 'mylib', name_prefix: '', name_suffix: 'lib',
                sources: mylib_src,
                dependencies: lib_freetype,
                include_directories: mylib_inc,
                install: true,
                install_dir: dir_install )

# Install header files while keeping the folder structure
install_subdir( 'src', 
                install_dir: dir_header_install, 
                strip_directory: true, 
                exclude_files: mylib_src_exclude )

# Install external libraries
install_subdir( 'lib',
                install_dir: dir_install,
                strip_directory: true)