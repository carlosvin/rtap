
protoc = find_program('protoc', required : false)
depproto = dependency('protobuf', required : false)

gen = generator(protoc,
  output    : ['@BASENAME@.pb.cpp', '@BASENAME@.pb.h'],
  arguments : ['--proto_path=@SOURCE_DIR@', '--cpp_out=@BUILD_DIR@', '@INPUT@'])

generated = gen.process('protocol.proto')

rta_sources = ['rta.cpp']

rtalib = shared_library('rta',
                        rta_sources,
                        generated,
                        include_directories : inc,
                        install : true)
                        