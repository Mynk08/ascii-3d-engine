CXX = g++
CXXFLAGS = -std=c++17 -O2 -Wall

SRCS = src/main.cpp src/renderer.cpp src/camera.cpp src/mesh.cpp
OBJS = $(SRCS:.cpp=.o)

TARGET = ascii3d

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(OBJS) $(TARGET)
