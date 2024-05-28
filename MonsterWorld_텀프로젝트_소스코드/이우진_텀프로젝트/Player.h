#pragma once
#include "AI.h"
#include <conio.h>
enum Direction { Left = 75, Right = 77, Up = 72, Down = 80 };

class Player1 : public AI {  //���̵� ��, �������� �÷��̾� Ŭ����
public:
	Player1(string n = "�̷��η�", string i = "��", int px = 0, int py = 0)
		: AI(n, i, px, py) {}
	~Player1() { cout << "[Player1]  "; }
	int getDirkey() { return _getche() == 224 ? _getche() : 0; }
	void move(int** map, int maxx, int maxy) {
		if (_kbhit()) { //Ű�� �Է��� �Ǿ����� Ȯ��
			char ch = getDirkey();
			if (ch == Left) p[0]--;
			else if (ch == Right)p[0]++;
			else if (ch == Up)p[1]--;
			else if (ch == Down)p[1]++;
			else return;
			clip(maxx, maxy);
			eat(map);
		}
	}
};
class Player : public AI { // ���̵� ߾������ �÷��̾� Ŭ����
public:
	Player(string n = "�̷��η�", string i = "��", int px = 0, int py = 0)
		: AI(n, i, px, py) {}
	~Player() { cout << "[Player1]  "; }
	int getDirkey() { return _getche() == 224 ? _getche() : 0; }
	void move(int** map, int maxx, int maxy) {
		if (_kbhit()) { //Ű�� �Է��� �Ǿ����� Ȯ��
			if (!isSleep()) {  //���̵� ߾�� ��� AI��� ���� ���ߴ� �ð��� ����
				char ch = getDirkey();
				if (ch == Left) p[0]--;
				else if (ch == Right)p[0]++;
				else if (ch == Up)p[1]--;
				else if (ch == Down)p[1]++;
				else return;
				clip(maxx, maxy);
				eat(map);
			}
		}
	}
};