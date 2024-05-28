#pragma once
#include "Point.h"
#include <iostream>
#include <string>
#define MAXLINES 100
using namespace std;

class Canvas {  //�� ����� ���� ���� ȭ���� Ŭ����
	string line[MAXLINES];
	int xMax, yMax;
public:
	Canvas(int nx = 10, int ny = 10) : xMax(nx), yMax(ny) {
		for (int y = 0; y < yMax; y++)
			line[y] = string(xMax * 2, ' ');
	}
	void draw(int x, int y, string val) {
		if (x >= 0 && y >= 0 && x < xMax && y < yMax)
			line[y].replace(x * 2, 2, val);
	}

	void draw(Point& p, string val) { draw(p.x, p.y, val); }
	void clear(string val = "  ") {  //����Ʈ �Ű�����
		for (int y = 0; y < yMax; y++)
			for (int x = 0; x < xMax; x++)
				draw(x, y, val);
	}
	void print(const char* title = "<My Canvas>") {
		system("cls");
		cout << title << endl;
		for (int y = 0; y < yMax; y++)
			cout << line[y] << endl;
		cout << endl;
	}
};