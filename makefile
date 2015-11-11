CharacterBuilder: CharacterBuilder.o
	g++ -o CharacterBuilder CharacterBuilder.o
CharacterBuilder.o: CharacterBuilder.cpp Character.h
	g++ -c CharacterBuilder.cpp
