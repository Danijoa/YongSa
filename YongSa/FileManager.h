#pragma once
#include "YongSa_Common.h"
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class FileManager
{
private:
	//
public:
	void WriteFile(string fileName, SaveData &mySave);
	void ReadFile(string fileName);

	FileManager();	//������
	~FileManager();	//�Ҹ���
};

