project('mylib', ['cpp', 'c'])

cpp = meson.get_compiler('cpp')
cc = meson.get_compiler('c')

dir_base = meson.current_source_dir()
mylib_inc = include_directories('include')

deps = [
  cpp.find_library('mylib', dirs: dir_base, required: true),
  cc.find_library('freetype', dirs: dir_base, required: true)
]

mylib_dep = declare_dependency( dependencies: deps,
                                include_directories: mylib_inc )