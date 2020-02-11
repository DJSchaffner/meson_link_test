project('freetype', 'c')

cc = meson.get_compiler('c')
dir_base = meson.current_source_dir()
freetype_inc = include_directories('include')

freetype_dep = declare_dependency(  dependencies: cc.find_library('freetype', dirs: dir_base, required: true),
                                    include_directories: freetype_inc )