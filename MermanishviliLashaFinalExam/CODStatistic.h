//Lasha Mermanishvili
//May 7th 2023
//CIS 1202 501

#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class CODStatistic
{

private: string playerName;
	double numOfKills, numOfDeaths, numOfVictories, numOfLosses;
	   float KDRatio, league;
	   double score1,score2,finalScore;
public: //setters
	void setPlayerName() {
		cin >> playerName;
	}
	void setnumOfKills() {
		cin >> numOfKills;
	}
	void setnumOfDeaths() {
		cin >> numOfDeaths;
	}
	void setnumOfVictories() {
		cin >> numOfVictories;
	}
	void setnumOfLosses() {
		cin >> numOfLosses;
	}

	//getters
	double getnumOfKills() { return numOfKills; }
	double getnumOfDeaths() { return numOfDeaths; }
	double getnumOfVictories() { return numOfVictories; }
	double getnumOfLosses() { return numOfLosses; }
	//functions
	float getKDRatio() { return KDRatio = numOfKills / numOfDeaths;
	}
	string getPlayerName() { return playerName; }
	float getLeague(){
		return round(KDRatio);	//math function1
	}
	double getFinalScore(){

		score1 = (numOfKills*100) - (numOfDeaths*50);
		score2=pow(score1, numOfVictories);//math function2
		finalScore = (score1 + score2) - (numOfLosses*200);
		
		return finalScore;
	}


};

