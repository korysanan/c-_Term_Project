#include "AIWorld.h"
#include "AIKinds.h"
#include "Player.h"
#include "RankingBoard.h"
#include <time.h>

int main(void)  //�����Լ�
{
	cout << "<���丮 ���� ��Ģ>\n";
	cout << "�켱 �� ������ ���丮�� ó���� ���ɴϴ�.\n";
	cout << "�� ���丮�� �� �پ� ������ �Ǹ� �ƹ�Ű�� ������ ���丮�� ���� �ٷ� �Ѿ�ϴ�.\n";
	cout << "���丮�� �ȼ��̸� ����ְ� �о��ֽø� �����ϰڽ��ϴ�.\n";
	cout << "���� ���丮�� ������ ��Ҵ� ������ ����̹Ƿ� ���ǰ��� ���谡 �����ϴ�.\n";
	_getche();
	system("cls");
	cout << "<���� ���� ��������>\n";
	cout << "�� ������ �켱 ���̵��� '߾' , '��' , '��'�� ���������ֽ��ϴ�.\n";
	cout << "ó���� ��ŷ�� �˾ƺ� �� ���̵��� ������ �� ������\n";
	cout << "���̵� ������ �������������� �˷��帮���� �ϰڽ��ϴ�.\n";
	cout << "������ ��ü �̵�Ƚ���� 1000�� �Ǹ� �ڵ����� ������ ������ �Ǹ�\n";
	cout << "World ���� ���� ������ 0�� �� �� ������ ���ᰡ �˴ϴ�.\n";
	cout << "������ �¸� ������\n";
	cout << "�÷��̾ ���� ���� ������ 256�� �̻��� �� ���ӿ��� �¸��ϸ�\n";
	cout << "256������ ���� ���� �ÿ� ���ӿ��� �й��ϴ� �����Դϴ�.\n";
	_getche();
	system("cls");
	cout << "<���̵� �Ұ�>\n";
	cout << "�켱 ���̵� ���� ���� ���� �̾߱�帮�ڽ��ϴ�.\n";
	cout << "1.AI�� ���� �ð��� �ֽ��ϴ�.\n";
	cout << "2.AI�� �������� �ܼ��ϸ� AI������ 5���Դϴ�.\n";
	cout << "\n�������� ���̵� �鿡 ���� �̾߱�帮�ڽ��ϴ�.\n";
	cout << "1.AI�� ���� �ð��� �ֽ��ϴ�.(���̵� ���� ����)\n";
	cout << "2.���̵� ���� ������ AI�� ���ο� ������ AI�� 2�� �߰� ����ϴ�. \n";
	cout << "\n�������� ���̵� ߾�� ���� �̾߱�帮�ڽ��ϴ�.\n";
	cout << "1.���̵� ��� �����ϳ� �÷��̾�Ե� ���� �ð��� �ֽ��ϴ�.\n";
	cout << "�̻����� ���ӿ� ���� �������� ������ ��ġ�ڽ��ϴ�. �����մϴ�.\n";
	cout << "�ƹ�Ű�� ������ ���ӿ� ���� ���丮�� �Ѿ�ϴ�.";
	_getche();
	system("cls");
	cout << "���� 2030�� ������� AI�� ������ �ϱ� �����Ͽ� ���� ������� AI������ �ϰԵȴ�.\n";
	_getche();
	cout << "�� �� ��õ�� �ִ� K�뿡�� �ϳ��� ����� �ΰ�����(�̸��� A)�� ź���ϰ� �ȴ�.\n";
	_getche();
	cout << "������� �̸��� ��� K������ ������ �Ǿ���, �����谡 �ָ��� �ϰ� �Ǿ���.\n";
	_getche();
	cout << "�������� '���İ�'��� AI �ٵ� ���α׷��� �������� �̸��� ������ ��ó��\n";
	_getche();
	cout << "K�뿡 'A'�� � ������ ������ �� �����谡 �����ߴ�.\n";
	_getche();
	cout << "������ �� �ΰ������� �ʹ� �ȶ��ߴ� ���ϱ�?\n";
	_getche();
	cout << "�ΰ������� �ᱹ K�뿡 �ִ� ����Ʈ ���丮��� ���� ���� ������ ħ���� �Ͽ�\n";
	_getche();
	cout << "�κ��� �ڽ��� �־���.\n";
	_getche();
	cout << "�� �� �κ��� ���� ���� AI�� �ᱹ...\n";
	_getche();
	cout << "���ָ� �����״�.\n";
	_getche();
	cout << "�׷κ��� 30���� ���� 2060��...\n";
	_getche();
	cout << "����� AI���� ������ �����ϰ� �Ǵµ�\n";
	_getche();
	cout << "�׶� ó�� 'A'�� ź���ϰ� �� K�뿡�� �Ѱ��� ���α׷��� �����ϰ� �ȴ�.\n";
	_getche();
	cout << "�� ���α׷��� �ΰ������� ���ָ� ����� �� ������ \n";
	_getche();
	cout << "ó�� ���ߵ� 'A'�� ���α׷��� ��ġ�ϸ� 'A'�Ӹ� �ƴ϶� 'A'���� ź���� �����迡 �ΰ����� ���� ���ָ� ����� �� �ִ�.\n";
	_getche();
	cout << "�׷� ���� �ٷ� �ΰ����ɿ� ���α׷��� ��ġ�ϸ� �Ǵ� ���� �ƴѰ�?\n";
	_getche();
	cout << "������ 'A'�� �ſ� �ȶ��ϱ⿡ �� �ΰ������� �γ��� �ش��ϰ� �ִ� ��ǻ�Ͱ� �ִ� ���� ������ �ϱ� ���ؼ� �ʿ��� � ������ �����迡 ���ܳ��Ҵ�.\n"; 
	_getche();
	cout << "�� ������ �����迡 512���� ������ ������ �� �� �߿� 256���� �տ� �־�� �� ��ǻ�Ͱ� �ִ� ��ҿ� ������ �� �ִ�.\n";
	_getche();
	cout << "�׷��� �÷��̾�(���)�� �ΰ��� ��ǥ�μ� �ΰ��� �ٽ� ��ȭ�� �տ� �ֱ� ���� �� 256�� �̻��� ������ �ӹ��� �޾Ҵ�.\n";
	_getche();
	cout << "������ �׶� �� �ҽ��� 'A'�� �����Ȱ� 'A'�� �ٸ� ���� �ΰ����ɵ鿡�� ����� �Ͽ� �� ���� ȸ���Ϸ� �Ѵ�.\n";
	_getche();
	cout << "���� �÷��̾�(���)�� �ٸ� �ΰ����ɵ麸�� �� ���� ���� ������ �� ���� ���ΰ�..\n";
	_getche();
	cout << "����� �÷��̿� ������ ��ȭ�� �޷��ִ�...\n";
	_getche();
	cout << "������ �����Ϸ��� �ƹ�Ű�� ��������..";
	_getche();
	system("cls");

	int i;
	cout << "���̵��� �Է��ϼ���\n";
	cout << "1. ���̵� ��\n";
	cout << "2. ���̵� ��\n";
	cout << "3. ���̵� ߾\n\n";
	cout << "���̵� �������ּ��� : ";
	cin >> i;  //���̵� �Է�

	if (i == 1)
	{
		RankingBoard rank;
		try {  //����ó��
			rank.load("AIWorld1.rnk");
		}
		catch (FileException e) {
			char str[80];
			string passwd, correct = "22";
			cout << "AI�� Ǯ���ӿ��� ���ĺ� ������ �� ��ϱ�?: ";
			for (int i = 0;; i++) {
				str[i] = _getch();
				putchar('*');
				if (str[i] == '\r') {
					str[i] = '\0';
					passwd = str;
					cout << "\n";
					break;
				}
			}
			if (passwd != correct) {
				cout << "��й�ȣ�� ���� �ʽ��ϴ�. ���� ����.\n\n";
				exit(0);
			}
		}
		rank.print("[���� ��ŷ: ����]");
		_getche();

		srand((unsigned int)time(NULL));
		int w = 32, h = 16;  //���� 32*16 �̴�. �� �������� ������ 512��

		AIWorld game(w, h);
		game.add(new Siri("���̽÷���", "��", rand() % w, rand() % h));
		game.add(new Bixby("���̺򽺺�", "��", rand() % w, rand() % h));
		game.add(new Alexa("�˷����", "��", rand() % w, rand() % h));
		game.add(new Watson("���ηοӽ�", "��", rand() % w, rand() % h, true));
		game.add(new Watson("���ηοӽ�", "��", rand() % w, rand() % h, false));

		Player1* player1 = new Player1("�÷��̾�  ", "��", rand() % w, rand() % h);
		game.add(player1);
		game.play(1000, 10);
		printf("------���� ����---------------------\n");
		if (player1->nItem > 256)  //Player1�� �������� ������ 256 �̻��̸�
		{
			cout << "�¸��Ͽ����ϴ�\n";
			cout << "������� ���� ������ ��ȭ�� ã�� �Ǿ����ϴ�.\n";
			cout << "���� ������ ���� �ƹ�Ű�� ��������...\n";
			_getche();
			rank.add(player1->nItem, player1->nItem / player1->total);  //this �����͸� �̿��Ͽ� Player1�� nItem�� nItem / total�� ��ŷ ������ �ø��ϴ�. 
			rank.print("[���� ��ŷ: ����]");
			rank.store("AIWorld1.rnk");
		}
		else
		{
			cout << "�й��Ͽ����ϴ�\n";
			cout << "�ƽ��Ե� ������ AI���� ������ ���߽��ϴ�.\n";
			cout << "�ƹ�Ű�� ������ ������ �����Ͻʽÿ�..";
			_getche();
		}
		return 0;
	}
	if (i == 2)  //�ּ����� ���� ������ ���� ����
	{
		RankingBoard rank;
		try {
			rank.load("AIWorld2.rnk");
		}
		catch (FileException e) {
			char str[80];
			string passwd, correct = "22";
			cout << "AI�� Ǯ���ӿ��� ���ĺ� ������ �� ��ϱ�?: ";
			for (int i = 0;; i++) {
				str[i] = _getch();
				putchar('*');
				if (str[i] == '\r') {
					str[i] = '\0';
					passwd = str;
					cout << "\n";
					break;
				}
			}
			if (passwd != correct) {
				cout << "��й�ȣ�� ���� �ʽ��ϴ�. ���� ����.\n\n";
				exit(0);
			}
		}
		rank.print("[���� ��ŷ: ����]");
		_getche();

		srand((unsigned int)time(NULL));
		int w = 32, h = 16;

		AIWorld2 game(w, h);
		game.add(new Siri("���̽÷���", "��", rand() % w, rand() % h));
		game.add(new Bixby("���̺򽺺�", "��", rand() % w, rand() % h));
		game.add(new Alexa("�˷����", "��", rand() % w, rand() % h));
		game.add(new Watson("���ηοӽ�", "��", rand() % w, rand() % h, true));
		game.add(new Watson("���ηοӽ�", "��", rand() % w, rand() % h, false));
		game.add(new Cotana("��Ÿ������", "��", rand() % w, rand() % h));
		game.add(new GigaGenie("�Ⱑ���Ͼ�", "��", rand() % w, rand() % h));

		Player1* player1 = new Player1("�÷��̾�  ", "��", rand() % w, rand() % h);
		game.add(player1);
		game.play(1000, 10);
		printf("------���� ����---------------------\n");

		if (player1->nItem > 256)
		{
			cout << "�¸��Ͽ����ϴ�\n";
			cout << "������� ���� ������ ��ȭ�� ã�� �Ǿ����ϴ�.\n";
			cout << "���� ������ ���� �ƹ�Ű�� ��������...\n";
			_getche();
			rank.add(player1->nItem, player1->nItem / player1->total);
			rank.print("[���� ��ŷ: ����]");
			rank.store("AIWorld2.rnk");
		}
		else
		{
			cout << "�й��Ͽ����ϴ�\n";
			cout << "�ƽ��Ե� ������ AI���� ������ ���߽��ϴ�.\n";
			cout << "�ƹ�Ű�� ������ ������ �����Ͻʽÿ�..";
			_getche();
		}
		return 0;
	}
	if (i == 3)  //�ּ����� ���� ������ ���� ����
	{
		RankingBoard rank;
		try {
			rank.load("AIWorld3.rnk");
		}
		catch (FileException e) {
			char str[80];
			string passwd, correct = "22";
			cout << "AI�� Ǯ���ӿ��� ���ĺ� ������ �� ��ϱ�?: ";
			for (int i = 0;; i++) {
				str[i] = _getch();
				putchar('*');
				if (str[i] == '\r') {
					str[i] = '\0';
					passwd = str;
					cout << "\n";
					break;
				}
			}
			if (passwd != correct) {
				cout << "��й�ȣ�� ���� �ʽ��ϴ�. ���� ����.\n\n";
				exit(0);
			}
		}
		rank.print("[���� ��ŷ: ����]");
		_getche();

		srand((unsigned int)time(NULL));
		int w = 32, h = 16;

		AIWorld3 game(w, h);
		game.add(new Siri("���̽÷���", "��", rand() % w, rand() % h));
		game.add(new Bixby("���̺򽺺�", "��", rand() % w, rand() % h));
		game.add(new Alexa("�˷����", "��", rand() % w, rand() % h));
		game.add(new Watson("���ηοӽ�", "��", rand() % w, rand() % h, true));
		game.add(new Watson("���ηοӽ�", "��", rand() % w, rand() % h, false));
		game.add(new Cotana("��Ÿ������", "��", rand() % w, rand() % h));
		game.add(new GigaGenie("�Ⱑ���Ͼ�", "��", rand() % w, rand() % h));

		Player* player = new Player("�÷��̾�  ", "��", rand() % w, rand() % h);
		game.add(player);
		game.play(1000, 10);
		printf("------���� ����---------------------\n");

		if (player->nItem > 256)
		{
			cout << "�¸��Ͽ����ϴ�\n";
			cout << "������� ���� ������ ��ȭ�� ã�� �Ǿ����ϴ�.\n";
			cout << "���� ������ ���� �ƹ�Ű�� ��������...\n";
			rank.add(player->nItem, player->nItem / player->total);
			rank.print("[���� ��ŷ: ����]");
			rank.store("AIWorld3.rnk");
		}
		else
		{
			cout << "�й��Ͽ����ϴ�\n";
			cout << "�ƽ��Ե� ������ AI���� ������ ���߽��ϴ�.\n";
			cout << "�ƹ�Ű�� ������ ������ �����Ͻʽÿ�..";
			_getche();
		}
		return 0;
	}
}

