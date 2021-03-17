#pragma once
#include <string>
#include <vector>

//세이브 데이터
struct SaveData
{
	int playerX_s;
	int playerY_s;
	int money_s;
	vector<pair<int, int>> monPov_s;
	int height_s;
	int width_s;
};

//몬스터 공통 사용 정보
struct MonsterCommonData
{
	char mon_Icon[3] = { 'V','W','M' };
	int mon_Money[3] = { 30,50,80 };
	int mon_XP[3] = { 10,20,30 };
	int mon_totalHP[3] = { 1,2,3 };
	std::string mon_name[3] = { "숲", "늪", "땅" };
};

//몬스터 정보
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

//맵 정보
struct MazeData
{
	int ground[3] = { 0, 1, 2 };	//0(숲) 1(논) 2(땅)
	int width;
	int height;
	char icon[3] = { '+', '=', '-' };
	int totalMonster;
	int monsterNum;	//지금 맵에 총 몇마리?
};

//난이도
struct Difficulty
{
	std::string diff[3] = { "초급[1]", "중급[2]", "고급[3]" };
	int startHP[3] = { 150, 170, 200 };	//HeroData totalHP 결정
	int monsterNumLevel[3] = { 1, 2, 3 };	//1~3마리
	int maze[3][2] = { {5,10}, {10,15},{15,20} };	//MazeData width, height 결정
};

//영웅 정보
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

//상점 정보
struct StoreData
{
	std::string name[4] = { "HP +10", "HP +20" , "HP +30" , "전체 회복" };
	int recover[3] = { 10 , 20, 30 };	//+전체회복
	int cost[4] = { 50, 75, 100, 150 };
	int remain[4] = { 5, 3, 2, 1 };
};
