#include "FileManager.h"
#include "YongSa_Common.h"
#include <iostream>
//using namespace std;

void FileManager::WriteFile(string fileName, SaveData& mySave)
{
	ofstream fout;
	fout.open(fileName);

	fout << "���� ��ġ: " << mySave.playerX_s << ", " << mySave.playerY_s << "\n";
	fout << "���: " << mySave.money_s << "\n";
	for (int i = 0; i < mySave.monPov_s.size(); i++)
		fout << "���� " << i << " ��ġ: " << mySave.monPov_s[i].first << ", " << mySave.monPov_s[i].second << "\n";
	fout << "�� ũ��: " << mySave.height_s << " x " << mySave.width_s << "\n";

	fout.close();
}

void FileManager::ReadFile(string fileName)
{
	ifstream fin;
	fin.open(fileName);

}

FileManager::FileManager()
{
}

FileManager::~FileManager()
{
}
