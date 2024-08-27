ARDUINODIR := ~/arduino
SOURCES := main.cpp
TARGET := main.cpp
BOARD := uno
include ~/Downloads/arduino.mk

all:
	make upload

