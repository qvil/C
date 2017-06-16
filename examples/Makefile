CC = gcc
CFLAGS = -W -Wall
TARGET = main
OBJECTS = main.o
default: main
main: main.c
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

# Seowon Makefile
# .EXPORT_ALL_VARIABLES:

# PARENT_DIR = ../../../
# INST_DIR = /usr/bin/
# EXEC = seowonmqttd
# UCLINUX_BUILD_USER=1
# -include $(LINUX_CONFIG)
# -include $(CONFIG_CONFIG)
# -include $(ARCH_CONFIG)

# CFLAGS += -g
# CFLAGS += -I../daemon/include
# CFLAGS += -I../common
# CFLAGS += -I../lib/include
# CFLAGS += -I../ini
# CFLAGS += -Wall -DDEBUG

# C_FILES := $(wildcard src/*.c)
# OBJ_FILES := $(addprefix src/,$(notdir $(C_FILES:.c=.o)))

# LDLIBS += -L../lib -L../ini
# LDLIBS += -lseowonmqtt -lpthread -lini

# all: $(EXEC)

# src/%.o: src/%.c
#     $(CC) $(CFLAGS) -c -o $@ $<

# $(EXEC): $(OBJ_FILES)
# #   gcc -o $(EXEC) src/seowonmqttd.c -L../lib -lseowonmqtt
#     $(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^ $(LDLIBS)

# clean:
#     @rm -f $(TARGET_LIB) $(OBJ_FILES) $(MQTT_OBJ_FILES)