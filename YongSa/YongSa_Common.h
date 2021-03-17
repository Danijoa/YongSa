#pragma once
#include <string>
#include <vector>

//���̺� ������
struct SaveData
{
	int playerX_s;
	int playerY_s;
	int money_s;
	vector<pair<int, int>> monPov_s;
	int height_s;
	int width_s;
};

//���� ���� ��� ����
struct MonsterCommonData
{
	char mon_Icon[3] = { 'V','W','M' };
	int mon_Money[3] = { 30,50,80 };
	int mon_XP[3] = { 10,20,30 };
	int mon_totalHP[3] = { 1,2,3 };
	std::string mon_name[3] = { "��", "��", "��" };
};

//���� ����
struct MonsterData
{
	std::string name;
	int totalHP;
	int curHP;
	int monXP;
	int monMoney;
	char monIcon;
	int monsterX;
	int monsterY;
	bool isAlive = true;
};

//�� ����
struct MazeData
{
	int ground[3] = { 0, 1, 2 };	//0(��) 1(��) 2(��)
	int width;
	int height;
	char icon[3] = { '+', '=', '-' };
	int totalMonster;
	int monsterNum;	//���� �ʿ� �� ���?
};

//���̵�
struct Difficulty
{
	std::string diff[3] = { "�ʱ�[1]", "�߱�[2]", "���[3]" };
	int startHP[3] = { 150, 170, 200 };	//HeroData totalHP ����
	int monsterNumLevel[3] = { 1, 2, 3 };	//1~3����
	int maze[3][2] = { {5,10}, {10,15},{15,20} };	//MazeData width, height ����
};

//���� ����
struct HeroData
{
	std::string heroName;
	int hp;
	int totalHP;
	int money = 0;
	int curDifficulty;
	int playerX = 1;
	int playerY = 1;
	int nextX;
	int nextY;
	int playerMove = 0;
	int xp = 0;
};

//���� ����
struct StoreData
{
	std::string name[4] = { "HP +10", "HP +20" , "HP +30" , "��ü ȸ��" };
	int recover[3] = { 10 , 20, 30 };	//+��üȸ��
	int cost[4] = { 50, 75, 100, 150 };
	int remain[4] = { 5, 3, 2, 1 };
};
