SOURCE_HEADER=socket.h
SOURCE_SOCKET=socket.c
SOURCE_CLIENT=client_socket.c
SOURCE_SERVER=server_socket.c
CC:= gcc
CXX:= g++
CMD=$(CC) $? -o $@
CPP=$(CXX) $? -o $@

header: $(SOURCE_HEADER)
	$(CMD)
socket: $(SOURCE_SOCKET)
	$(CMD)
client: $(SOURCE_CLIENT)
	$(CMD)
server: $(SOURCE_SERVER)
	$(CMD)
