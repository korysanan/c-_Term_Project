#pragma once
#include "AI.h"

class Siri : public AI {  //siri Ŭ������ AIŬ������ �ڽ�Ŭ�����̴�.
public:
	Siri(string n = "����", string i = "��", int x = 0, int y = 0) //����Ʈ �Ű�����
		: AI(n, i, x, y) {} //��� �ʱ�ȭ ����Ʈ
	~Siri() { cout << "[Siri]     "; } //������
};

class Bixby : public AI { //Bixby Ŭ������ AIŬ������ �ڽ�Ŭ�����̴�.
public:
	Bixby(string n = "�Ｚ", string i = "��", int x = 0, int y = 0) //����Ʈ �Ű�����
		: AI(n, i, x, y) {} //��� �ʱ�ȭ ����Ʈ
	~Bixby() { cout << "[Bixby]    "; } //������

	void move(int** map, int maxx, int maxy) { //������
		if (!isSleep()) {
			int dir = rand() % 4;
			if (dir == 0) p[0]--;
			else if (dir == 1) p[0]++;
			else if (dir == 2) p[1]--;
			else p[1]++;
			clip(maxx, maxy);
			eat(map);
		}
	}
};

class  Alexa : public AI { //Alexa Ŭ������ AIŬ������ �ڽ�Ŭ�����̴�.
public:
	Alexa(string n = "�Ƹ���", string i = "��", int x = 0, int y = 0) //����Ʈ �Ű�����
		: AI(n, i, x, y) {} //��� �ʱ�ȭ ����Ʈ
	~Alexa() { cout << "[Alexa]    "; } //������

	void move(int** map, int maxx, int maxy) { //������
		if (!isSleep()) {
			p = Point(rand() % maxx, rand() % maxy);
			clip(maxx, maxy);
			eat(map);
		}
	}
};

class Watson : public AI { //Watson Ŭ������ AIŬ������ �ڽ�Ŭ�����̴�.
protected:
	bool bHori;
public:
	Watson(string n = "IBM", string i = "��", int x = 0, int y = 0, bool bH = true) //����Ʈ �Ű�����
		: AI(n, i, x, y), bHori(bH) {} //��� �ʱ�ȭ ����Ʈ
	~Watson() { cout << "[Watson]   "; } //������

	void move(int** map, int maxx, int maxy) { //������
		if (!isSleep()) {
			int dir = rand() % 2;
			int jump = rand() % 2 + 1;
			if (bHori)
				p[0] += ((dir == 0) ? -jump : jump);
			else
				p[1] += ((dir == 0) ? -jump : jump);
			clip(maxx, maxy);
			eat(map);
		}
	}
};

class Cotana : public Watson { //Cotana Ŭ������ WatsonŬ������ �ڽ�Ŭ�����̴�.
	int count; 
public:
	Cotana(string n = "MS", string i = "��", int x = 0, int y = 0, bool bH = true) //����Ʈ �Ű�����
		: Watson(n, i, x, y, bH), count(30) {} //��� �ʱ�ȭ ����Ʈ
	~Cotana() { cout << "[Cotana]   "; } //������

	void move(int** map, int maxx, int maxy) { //������
		if (!isSleep()) {
			Watson::move(map, maxx, maxy);
			count--;
			if (count == 0) {
				bHori = !bHori;
				count = 30;
			}
			clip(maxx, maxy);
			eat(map);
		}
	}
};

class GigaGenie : public Bixby { //GigaGenie Ŭ������ BixbyŬ������ �ڽ�Ŭ�����̴�.
	int count2 = 30;
public:
	GigaGenie(string n = "KT", string i = "��", int x = 0, int y = 0) //����Ʈ �Ű�����
		: Bixby(n, i, x, y) {} //��� �ʱ�ȭ ����Ʈ
	~GigaGenie() { cout << "[GigaGenie]"; } //������

	void move(int** map, int maxx, int maxy) { //������
		if (!isSleep()) {
			if (count2 > 30 && count2 <= 60)
			{
				Bixby::move(map, maxx, maxy);
				count2--;
			}
			else if (count2 <= 30) {
				switch (rand() % 4) {
				case 0: p[0]++; p[1]--; break;
				case 1: p[0]++; p[1]++; break;
				case 2: p[0]--; p[1]++; break;
				case 3: p[0]--; p[1]--; break;
				}
				count2--;
				if (count2 == 0) {
					count2 = 60;
				}
			}
			clip(maxx, maxy);
			eat(map);
		}
	}
};