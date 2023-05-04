OBJS	= main.o Usables.o Items.o Livings.o Spells.o Squares.o Market.o Grid.o HeroesTeam.o
SOURCE	= main.cc Usables.cc Items.cc Livings.cc Spells.cc Squares.cc Market.cc Grid.cc HeroesTeam.cc
HEADER	= main.h Usables.h Items.h Livings.h Spells.h Squares.h Market.h Grid.h HeroesTeam.h
OUT	= project
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.cc
	$(CC) $(FLAGS) main.cc 

Usables.o: Usables.cc
	$(CC) $(FLAGS) Usables.cc 

Items.o: Items.cc
	$(CC) $(FLAGS) Items.cc 

Livings.o: Livings.cc
	$(CC) $(FLAGS) Livings.cc 

Spells.o: Spells.cc
	$(CC) $(FLAGS) Spells.cc 

Squares.o: Squares.cc
	$(CC) $(FLAGS) Squares.cc 

Market.o: Market.cc
	$(CC) $(FLAGS) Market.cc 

Grid.o: Grid.cc
	$(CC) $(FLAGS) Grid.cc 

HeroesTeam.o: HeroesTeam.cc
	$(CC) $(FLAGS) HeroesTeam.cc 


clean:
	rm -f $(OBJS) $(OUT)