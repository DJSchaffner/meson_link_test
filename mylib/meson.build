project('mylib', ['cpp'])

mylib_src = files([ 'src/mylib.cpp' ])

cpp = meson.get_compiler('cpp')
dir_base = meson.current_source_dir()
dir_lib = join_paths(dir_base, 'lib')

mylib_inc = include_directories('include')
lib_freetype = cpp.find_library('freetype', dirs: dir_lib, required: true)

static_library( 'mylib', name_prefix: '', name_suffix: 'lib',
                sources: mylib_src,
                dependencies: [lib_freetype],
                include_directories: mylib_inc)