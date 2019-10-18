// helloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <math.h>
#define numOfGardens 3

struct Position
{
	int x;
	int y;
};

struct Circle
{
	Position position;
	int radius = 0;
	bool touchGarden = false;
	bool touchOther = false;
};

Position gardens[numOfGardens];
int numOfTrees;

int main()
{
	for (int i = 0; i < numOfGardens; ++i)
	{
		std::cin >> gardens[i].x;
		std::cin >> gardens[i].y;
	}
	std::vector<Circle> trees;
	std::cin >> numOfTrees;

	for (int i = 0; i < numOfTrees; i++)
	{
		Circle tree;
		std::cin >> tree.radius;
		trees.push_back(tree);
	}

	

    std::cout << "Hello World!";
}

int calDistance(Position a, Position b)
{
	return sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
}

void findShortPath()
{
	calDistance(gardens[0])
}

