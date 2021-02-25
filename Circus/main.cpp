#include <iostream>
#include "Box.h"
#include "PreciousBall.h"

using std::wcout;
using std::endl;

void privateRoom(Box box) {
	wcout << L"Bobo is about to play with the ball.." << endl;
	box.getBall().printColor();
}
int wmain() {
	// Box boboBox = ...
	PreciousBall chickoBall;
	chickoBall = boboBox.getBall();
	wcout << L"Chiko is about to play with the ball.." << endl;
	chickoBall.printColor(); // Works!

	wcout << L"Bobo takes his ball to the room" << endl;
	privateRoom(std::move(boboBox));

	wcout << L"Chiko is about to play with the ball again.." << endl;
	chikoBall.printColor(); // Doesn't work (print indicative message)
	return 0;
}