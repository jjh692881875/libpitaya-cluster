from conans import ConanFile, CMake
from conans.errors import ConanInvalidConfiguration

class PitayaCpp(ConanFile):
    name = 'pitaya_cpp'
    version = '0.3.0'
    url = 'https://github.com/topfreegames.com/libpitaya-cluster'
    description = 'C++ library that allows the creation of Pitaya servers.'
    settings = 'os', 'compiler', 'build_type', 'arch'
    options = {
        'macosx_bundle': [False, True],
    }
    default_options = {
        'macosx_bundle': False,
    }
    requires = (
        'OpenSSL/1.0.2o@conan/stable',
        'boost/1.65.1@conan/stable',
        'protobuf/3.6.1@bincrafters/stable',
    )
    build_requires = (
        'gtest/1.8.1@bincrafters/stable'
    )
    generators = 'cmake_paths', 'cmake'
    exports_sources = (
        '*',
        '!_builds',
        '!boost_install_libc++',
        '!build',
        '!compile_commands.json',
        '!*bad_symlink*',
        '!test',
    )

    def configure(self):
        if self.settings.os != 'Linux' and self.settings.os != 'Macos':
            raise ConanInvalidConfiguration('%s is not supported' % self.settings.os)

    def config_options(self):
        if self.settings.os != 'Macos':
            del self.options.macosx_bundle

    def build(self):
        cmake = CMake(self)
        cmake.definitions['BUILD_TESTING'] = 'OFF'
        cmake.definitions['BUILD_SHARED_LIBS'] = 'OFF'
        cmake.definitions['CMAKE_INSTALL_PREFIX'] = 'cmake_install'
        if self.should_configure:
            cmake.configure()
        if self.should_build:
            cmake.build()
        if self.should_install:
            cmake.install()

    def package(self):
        self.copy('*.h', dst='include', src='cmake_install/include')
        self.copy('*.dylib', dst='lib', src='cmake_install/lib')
        self.copy('*.so', dst='lib', src='cmake_install/lib')
        self.copy('*.bundle', dst='lib', src='cmake_install/lib')

    def package_info(self):
        self.cpp_info.libs = ['pitaya_cpp']
        self.cpp_info.libdirs = ['lib/PitayaCpp']
        self.cpp_info.cxxflags = ['-std=c++11']

