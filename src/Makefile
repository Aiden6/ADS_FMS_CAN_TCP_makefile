# (c) BYD Auto Ltd.

#######################################################
#                                                     #
# AutoMatic Driving System API Library Build Targets  #
#                                                     #
#######################################################

INC_TEST_DIR = -I.
SRC_TEST_DIR = .
#LIB_TEST_DIR = ./../../libs
LIB_TEST_DIR = -L /lib/*.so
OBJ_TEST_DIR = ./obj

CC = g++
CFLAGS = -g -Wall
RM = rm

TEST_SRCS = $(foreach dir, $(SRC_TEST_DIR), $(wildcard $(dir)/*.cc))
#TEST_LIBS = $(foreach dir, $(LIB_TEST_DIR), $(wildcard $(dir)/*.so))

APP_NAME = $(OBJ_TEST_DIR)/test_app

$(APP_NAME):$(TEST_SRCS)
	$(CC) $(CFLAGS) $^ $(INC_TEST_DIR) -o $@  $(LIB_TEST_DIR) -lpthread  -lm -lrt -lboost_system -lstdc++ -lcrypto

.PHONY:clean
clean:
	$(RM) -rf $(OBJ_TEST_DIR)/*
