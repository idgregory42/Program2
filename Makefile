AutomatedMakefile = am
CC = g++

FILES = Widget.o InventoryDriver.o InventoryManager.o 
EXECUTABLE = 

PROJECT_PATH = $(CURRENT_DIR)
INC_DIRS = -I$(CURRENT_DIR)/CSC2110
LIB_DIRS = -L$(CURRENT_DIR)/CSC2110
LIBS = -lCSC2110

COMPILE = $(CC) $(INC_DIRS) -c
LINK = $(CC) $(LIB_DIRS)

all: Project	

Project: 					$(FILES)
						$(LINK) $(EXECUTABLE) $(FILES) $(LIBS)

InventoryDriver.o:				   InventoryDriver.cpp
						$(COMPILE) InventoryDriver.cpp

InventoryManager.o:     	InventoryManager.h InventoryManager.cpp
						$(COMPILE) InventoryManager.cpp
						
Widget.o:              		Widget.h Widget.cpp
						$(COMPILE) Widget.cpp

#DequeArrayDriver.o:    			   dequeArrayDriver.cpp
#						$(COMPILE) dequeArrayDriver.cpp
