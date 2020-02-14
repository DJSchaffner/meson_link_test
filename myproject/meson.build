project('myproject', ['cpp'])

myproject_src = files([ 'src/main.cpp' ])

cpp = meson.get_compiler('cpp')
dir_base = meson.current_source_dir()
dir_lib = join_paths(dir_base, 'lib')

mylib_dep = subproject('mylib').get_variable('mylib_dep')

executable( 'myproject',
            sources: myproject_src,
            dependencies: [mylib_dep] )