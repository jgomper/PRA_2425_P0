CXX = g++
CXXFLAGS = -std=c++11 -Wall

TARGET = brazo_robotico

all: $(TARGET)

$(TARGET): BrazoRobotico.o main.o
    $(CXX) $(CXXFLAGS) -o $(TARGET) BrazoRobotico.o main.o

BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
    $(CXX) $(CXXFLAGS) -c BrazoRobotico.cpp

main.o: main.cpp BrazoRobotico.h
    $(CXX) $(CXXFLAGS) -c main.cpp

clean:
    rm -f *.o $(TARGET)

test: $(TARGET)
    ./$(TARGET)

