
# Call of Duty Score Statistics Tracker

This C++ application is a console-based statistics tracker designed for players of the video game **Call of Duty**. It enables players to log gameplay data, analyze their performance, and calculate a final score based on custom scoring rules.

## Features

- 📋 Add a player profile
- 🔫 Track kills and deaths
- 🏆 Track victories and losses
- 📊 Calculate kill-to-death (K/D) ratio
- 🧮 Compute final game score based on a custom formula
- 🧾 View detailed score breakdown and player statistics

## Score Calculation Breakdown

```
+100 points per kill  
-50 points per death  
-200 points per loss  
The result is squared by the number of victories
```

## Menu Options

1. **Add Player** – Input name, kills, deaths, wins, and losses.
2. **View Player Statistics** – Display kills, deaths, wins, losses, K/D ratio, and league division.
3. **View Score Breakdown** – Explanation of how the score is calculated.
4. **View Final Score** – Show the final computed score.
5. **Exit Program** – Close the tracker.

## Example

```
Welcome to score statistics chart for the game Call Of Duty

1. Add Player
2. View Player statistics
3. View Player score breakdown
4. View Final score
5. Exit Program
```

## Technologies

- Language: C++
- Environment: Console/Terminal
- Header: `CODStatistic.h` (custom class handling player data and statistics)

## Getting Started

1. Clone this repository or copy the code into a local project.
2. Ensure you have `CODStatistic.h` and its implementation file.
3. Compile and run the program in any C++ environment or IDE.

```bash
g++ main.cpp -o tracker
./tracker
```

---

👨‍💻 *Created by Lasha Mermanishvili — May 2023*
