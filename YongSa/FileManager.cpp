#include "FileManager.h"
#include "YongSa_Common.h"
#include <iostream>
//using namespace std;

void FileManager::WriteFile(string fileName, SaveData& mySave)
{
	ofstream fout;
	fout.open(fileName);

	fout << "¿µ¿õ À§Ä¡: " << mySave.playerX_s << ", " << mySave.playerY_s << "\n";
	fout << "°ñµå: " << mySave.money_s << "\n";
	for (int i = 0; i < mySave.monPov_s.size(); i++)
		fout << "¸ó½ºÅÍ " << i << " À§Ä¡: " << mySave.monPov_s[i].first << ", " << mySave.monPov_s[i].second << "\n";
	fout << "¸Ê Å©±â: " << mySave.height_s << " x " << mySave.width_s << "\n";

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
