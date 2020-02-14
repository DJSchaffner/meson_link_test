project('mylib', ['cpp', 'c'])

mylib_src = files([ 'src/mylib.cpp' ])
mylib_inc = include_directories('include')

cc = meson.get_compiler('c')
dir_base = meson.current_source_dir()
dir_lib = join_paths(dir_base, 'lib')
lib_freetype = cc.find_library('freetype', dirs: dir_lib, required: true)

static_library( 'mylib', name_prefix: '', name_suffix: 'lib',
                sources: mylib_src,
                dependencies: lib_freetype,
                include_directories: mylib_inc )