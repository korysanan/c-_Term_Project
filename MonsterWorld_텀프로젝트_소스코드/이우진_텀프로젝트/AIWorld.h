#pragma once
#include "Canvas.h"
#include "AIKinds.h"
#include "Matrix.h"
#include "Player.h"
#include <Windows.h>
#define MAXMONS 8

class AIWorld  //AIWorld Ŭ���� ����   ���̵� ����
{
	Matrix world;
	int xMax, yMax, nMon, nMove;
	AI* pMon[MAXMONS];
	Canvas canvas;

	int& Map(int x, int y) { return world.elem(x, y); }
	bool isDone() { return countItems() == 0; }
	int countItems() {
		int nItems = 0;
		for (int y = 0; y < yMax; y++)
			for (int x = 0; x < xMax; x++)
				if (Map(x, y) > 0) nItems++;
		return nItems;
	}
	void print() {
		canvas.clear(". ");
		for (int y = 0; y < yMax; y++)
			for (int x = 0; x < xMax; x++)
				if (Map(x, y) > 0) canvas.draw(x, y, "��");
		for (int i = 0; i < nMon; i++)
			pMon[i]->draw(canvas);
		canvas.print("[ AI World (AI�κ��� ������ ���Ѷ�) ]");

		cerr << " ��ü �̵� Ƚ�� = " << nMove << endl;
		cerr << " ���� ������ �� = " << countItems() << endl;
		for (int i = 0; i < nMon; i++)
			pMon[i]->print();
	}
public:
	AIWorld(int w, int h) : world(h, w), canvas(w, h), xMax(w), yMax(h) {
		nMon = 0;
		nMove = 0;
		for (int y = 0; y < yMax; y++)
			for (int x = 0; x < xMax; x++) Map(x, y) = 1;
	}
	~AIWorld() {
		for (int i = 0; i < nMon; i++)
			delete pMon[i];
	}
	void add(AI* m) {
		if (nMon < MAXMONS)
			pMon[nMon++] = m;
	}
	void play(int maxwalk, int wait) {
		print();
		cerr << " ���͸� ��������...";
		getchar();
		for (int i = 0; i < maxwalk; i++) {
			((Siri*)pMon[0])->move(world.Data(), xMax, yMax);  //this ������ ���
			((Bixby*)pMon[1])->move(world.Data(), xMax, yMax); //this ������ ���
			((Alexa*)pMon[2])->move(world.Data(), xMax, yMax); //this ������ ���
			((Watson*)pMon[3])->move(world.Data(), xMax, yMax); //this ������ ���
			((Watson*)pMon[4])->move(world.Data(), xMax, yMax); //this ������ ���
			((Player1*)pMon[5])->move(world.Data(), xMax, yMax); //this ������ ���
			nMove++;
			print();
			if (isDone()) break;
			Sleep(wait);
		}
	}
};

class AIWorld2 //AIWorld2 Ŭ���� ����   ���̵� ���
{
	Matrix world;
	int xMax, yMax, nMon, nMove;
	AI* pMon[MAXMONS];
	Canvas canvas;

	int& Map(int x, int y) { return world.elem(x, y); }
	bool isDone() { return countItems() == 0; }
	int countItems() {
		int nItems = 0;
		for (int y = 0; y < yMax; y++)
			for (int x = 0; x < xMax; x++)
				if (Map(x, y) > 0) nItems++;
		return nItems;
	}
	void print() {
		canvas.clear(". ");
		for (int y = 0; y < yMax; y++)
			for (int x = 0; x < xMax; x++)
				if (Map(x, y) > 0) canvas.draw(x, y, "��");
		for (int i = 0; i < nMon; i++)
			pMon[i]->draw(canvas);
		canvas.print("[ AI World (AI�κ��� ������ ���Ѷ�) ]");

		cerr << " ��ü �̵� Ƚ�� = " << nMove << endl;
		cerr << " ���� ������ �� = " << countItems() << endl;
		for (int i = 0; i < nMon; i++)
			pMon[i]->print();
	}

public:
	AIWorld2(int w, int h) : world(h, w), canvas(w, h), xMax(w), yMax(h) {
		nMon = 0;
		nMove = 0;
		for (int y = 0; y < yMax; y++)
			for (int x = 0; x < xMax; x++) Map(x, y) = 1;
	}
	~AIWorld2() {
		for (int i = 0; i < nMon; i++)
			delete pMon[i];
	}
	void add(AI* m) {
		if (nMon < MAXMONS)
			pMon[nMon++] = m;
	}
	void play(int maxwalk, int wait) {
		print();
		cerr << " ���͸� ��������...";
		getchar();
		for (int i = 0; i < maxwalk; i++) {
			((Siri*)pMon[0])->move(world.Data(), xMax, yMax); //this ������ ���
			((Bixby*)pMon[1])->move(world.Data(), xMax, yMax); //this ������ ���
			((Alexa*)pMon[2])->move(world.Data(), xMax, yMax); //this ������ ���
			((Watson*)pMon[3])->move(world.Data(), xMax, yMax); //this ������ ���
			((Watson*)pMon[4])->move(world.Data(), xMax, yMax); //this ������ ���
			((Player1*)pMon[5])->move(world.Data(), xMax, yMax); //this ������ ���
			((Cotana*)pMon[6])->move(world.Data(), xMax, yMax);  //this ������ ���
			((GigaGenie*)pMon[7])->move(world.Data(), xMax, yMax); //this ������ ���
			nMove++;
			print();
			if (isDone()) break;
			Sleep(wait);
		}
	}
};

class AIWorld3  ////AIWorld3 Ŭ���� ����   ���̵� ߾��
{
	Matrix world;
	int xMax, yMax, nMon, nMove;
	AI* pMon[MAXMONS];
	Canvas canvas;

	int& Map(int x, int y) { return world.elem(x, y); }
	bool isDone() { return countItems() == 0; }
	int countItems() {
		int nItems = 0;
		for (int y = 0; y < yMax; y++)
			for (int x = 0; x < xMax; x++)
				if (Map(x, y) > 0) nItems++;
		return nItems;
	}
	void print() {
		canvas.clear(". ");
		for (int y = 0; y < yMax; y++)
			for (int x = 0; x < xMax; x++)
				if (Map(x, y) > 0) canvas.draw(x, y, "��");
		for (int i = 0; i < nMon; i++)
			pMon[i]->draw(canvas);
		canvas.print("[ AI World (AI�κ��� ������ ���Ѷ�) ]");

		cerr << " ��ü �̵� Ƚ�� = " << nMove << endl;
		cerr << " ���� ������ �� = " << countItems() << endl;
		for (int i = 0; i < nMon; i++)
			pMon[i]->print();
	}

public:
	AIWorld3(int w, int h) : world(h, w), canvas(w, h), xMax(w), yMax(h) {
		nMon = 0;
		nMove = 0;
		for (int y = 0; y < yMax; y++)
			for (int x = 0; x < xMax; x++) Map(x, y) = 1;
	}
	~AIWorld3() {
		for (int i = 0; i < nMon; i++)
			delete pMon[i];
	}
	void add(AI* m) {
		if (nMon < MAXMONS)
			pMon[nMon++] = m;
	}
	void play(int maxwalk, int wait) {
		print();
		cerr << " ���͸� ��������...";
		getchar();
		for (int i = 0; i < maxwalk; i++) {
			((Siri*)pMon[0])->move(world.Data(), xMax, yMax); //this ������ ���
			((Bixby*)pMon[1])->move(world.Data(), xMax, yMax); //this ������ ���
			((Alexa*)pMon[2])->move(world.Data(), xMax, yMax); //this ������ ���
			((Watson*)pMon[3])->move(world.Data(), xMax, yMax); //this ������ ���
			((Watson*)pMon[4])->move(world.Data(), xMax, yMax); //this ������ ���
			((Player*)pMon[5])->move(world.Data(), xMax, yMax); //this ������ ���
			((Cotana*)pMon[6])->move(world.Data(), xMax, yMax); //this ������ ���
			((GigaGenie*)pMon[7])->move(world.Data(), xMax, yMax); //this ������ ���
			nMove++;
			print();
			if (isDone()) break;
			Sleep(wait);
		}
	}
};