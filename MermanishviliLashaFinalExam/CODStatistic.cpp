//Lasha Mermanishvili
//May 7th 2023
//CIS 1202 501
#include "CODStatistic.h"

CODStatistic Player;

int choice;

int main() {

	
		cout << "Welcome to score statistics chart for the game Call Of Duty\n\n";
		do{
			cout<<"\n1.Add Player \n2.View Player statistics \n3.View Player score breakdown \n4.View Final score\n5.Exit Program\n";
		cin >> choice;
		
			switch (choice) { //menu
			case 1: //add player
				cout << "\n\nWhat is your name?";
				Player.setPlayerName();
				cout << "\nHow many kills did you get last game?";
				Player.setnumOfKills();
				cout << "\nHow many times did your player die?";
				Player.setnumOfDeaths();
				cout << "\nHow many victories did you have this season?";
				Player.setnumOfVictories();
				cout << "\nHow many losses?";
				Player.setnumOfLosses();
				break;
			case 2: //view player stats
				cout << "\nHere are the player results for " << Player.getPlayerName() << endl;
				cout << "\nKills: " << Player.getnumOfKills();
				cout << "\nDeaths: " << Player.getnumOfDeaths();
				cout << "\nWins: " << Player.getnumOfVictories();
				cout << "\nLosses: " << Player.getnumOfLosses();
				cout << "\nYour kill to death ratio is: " << Player.getKDRatio();
				cout << "\nYour league is Division " << Player.getLeague();
				break;
			case 3: //score breakdown
				cout << "\n\nScore BreakDown: ";
				cout << "\n\n+100 Points per kill\n-50 points per death\n\nResult is squared by the amount of victoreis\n\n-200 per number of losses\n";
				break;
			case 4://final score
				cout << "\n\nYour final score is " << Player.getFinalScore() <<" points";
				break;
			default: "\n\nInvalid selection!";
			}
		} while (choice != 5);
	
	return 0;
}