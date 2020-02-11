project('mylib', ['cpp'])

mylib_src = files([ 'src/mylib.cpp' ])
mylib_inc = include_directories('subprojects/freetype/include')

freetype_dep = subproject('freetype').get_variable('freetype_dep')

static_library( 'mylib', name_prefix: '', name_suffix: 'lib',
                sources: mylib_src,
                dependencies: [freetype_dep],
                include_directories: mylib_inc )