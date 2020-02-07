project('myproject', ['cpp'])

myproject_src = files([ 'src/main.cpp' ])

cpp = meson.get_compiler('cpp')
dir_base = meson.current_source_dir()
dir_lib = join_paths(dir_base, 'lib')

myproject_inc = include_directories('include')
lib_mylib = cpp.find_library('mylib', dirs: dir_lib, required: true)

executable( 'myproject', name_prefix: '', name_suffix: 'exe',
            sources: myproject_src,
            dependencies: [lib_mylib],
            include_directories: myproject_inc)