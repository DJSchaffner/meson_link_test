project('myproject', ['cpp'])

myproject_src = files([ 'src/main.cpp' ])

mylib_dep = subproject('mylib').get_variable('mylib_dep')

executable( 'myproject',
            sources: myproject_src,
            dependencies: [mylib_dep] )