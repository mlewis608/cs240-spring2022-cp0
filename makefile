# Specifiy the target
all: player

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
player: Player.o
	g++ Player.o -o player

# Specify how the object files should be created from source files
Player.o: Player.cpp
	g++ -c Player.cpp

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o player
