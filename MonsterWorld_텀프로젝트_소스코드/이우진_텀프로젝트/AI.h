#pragma once
#include "Canvas.h"
#include "Point.h"

class AI { //AI Ŭ����
protected:  //protected�� �����Ͽ� ����Լ��� �ڽ� Ŭ������ ����� �� �ְ� ��
	string name, icon;
	Point q, p;
	int x;
	int y;
	int nSleep;
	int lev;
	double dist;

	void clip(int maxx, int maxy) { p(maxx, maxy); }
	void eat(int** map) {
		if (map[p.y][p.x] == 1) {
			map[p.y][p.x] = 0;
			nItem++;
		}
		dist += (double)(p - q);
		total += (double)(p - q);
		q = p;
		if (dist > 40) {
			dist = 0;
			nSleep = 10;
		}
	}
	bool isSleep() {
		if (nSleep > 0) {
			nSleep--;
			return true;
		}
		else return false;
	}
public:
	double total;
	int nItem;
	AI(string n = "�̸�����AI", string i = "��", int x = 0, int y = 0)
		:name(n), icon(i), nItem(0),
		p(x, y), q(x, y), nSleep(0), dist(0.0), total(0.0) {}
	virtual ~AI() {  //������ �����ϰ� ��
		cout << icon << nItem << "  �Ÿ�: " << total << endl;
	}

	void draw(Canvas& canvas) { canvas.draw(p, icon); }
	virtual void move(int** map, int maxx, int maxy) { //������ �����ϰ� ��
		if (!isSleep()) {
			int num = rand() % 9 + 1;
			p += Point(num % 3 - 1, num / 3 - 1);
			clip(maxx, maxy);
			eat(map);
		}
	}
	void print() { cout << "\t" << name << icon << ":" << nItem << ":" << nSleep << endl; }
};