sacdiso = static_library(
        'sacdiso',
        'sacd_disc.cpp',
        'sacd_dsdiff.cpp',
        'sacd_media.cpp',
        'sacd_metabase.cpp',
        'scarletbook.cpp',
        'log_printf.cpp',
	'libdstdec/decoder/decoder.cpp',
        include_directories: inc,
        dependencies: [
                gcrypt_dep,
        ],
)

sacdiso_dep = declare_dependency(
    link_with: sacdiso,
)
