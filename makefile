COMPILE = main.cpp battle.cpp choices.cpp classes.cpp ascii.cpp
HEADER_COMPILE = battle.hpp choices.hpp classes.hpp ascii.hpp
EXTRA_FILES = makefile

compile:
	g++ $(COMPILE) -pthread -o godofwar

zip:
	zip godofwar.zip $(COMPILE) $(HEADER_COMPILE) $(EXTRA_FILES)