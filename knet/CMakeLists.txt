# CMakeLists file
cmake_minimum_required(VERSION 2.6)

project (knet)

SET(CMAKE_C_FLAGS "-g -O2 -Wall")
add_executable(knet
	buffer.c
	channel.c
	channel_ref.c
	list.c
	loop.c
	loop_balancer.c
	loop_impl.c
	misc.c
	ringbuffer.c
	stream.c
	address.c
	test.c
)

target_link_libraries(knet -lpthread)
