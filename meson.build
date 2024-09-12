project('c2000ware-core-sdk', 'c',
  version: '5.03.00.00',
)

# Includes and libs for driverlib.lib for the F2837xd.
#  
f2837xd_driverlib_include = include_directories('driverlib' / 'f2837xd' / 'driverlib')
f2837xd_driverlib_debug_path = meson.current_source_dir() / 'driverlib' / 'f2837xd' / 'driverlib' / 'ccs' / 'Debug' / 'driverlib.lib'
f2837xd_driverlib_debug_lib =  files(f2837xd_driverlib_debug_path)
f2837xd_driverlib_release_path = meson.current_source_dir() / 'driverlib' / 'f2837xd' / 'driverlib' / 'ccs' / 'Release' / 'driverlib.lib'
f2837xd_driverlib_release_lib = files(f2837xd_driverlib_release_path)
