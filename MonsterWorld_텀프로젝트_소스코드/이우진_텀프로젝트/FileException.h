#pragma once
#include <string>
struct FileException { //������ �̸��� �����带 ������ ����� �����ϴ�.
	string filename;
	bool bRead;
	FileException(string name, bool b) : filename(name), bRead(b) {}
};