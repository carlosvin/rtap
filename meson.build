project('rta', 'cpp',
  version : '1.0.0',
  license : 'MIT',
  default_options : ['cpp_std=c++11'])

protoc = find_program('protoc')
depproto = dependency('protobuf')

gen = generator(protoc,
  output    : ['@BASENAME@.pb.cc', '@BASENAME@.pb.h'],
  arguments : ['--proto_path=@SOURCE_DIR@', '--cpp_out=@BUILD_DIR@', '@INPUT@'])

generated = gen.process('protocol.proto')


inc = include_directories('include')

subdir('include')
subdir('src')
subdir('test')
