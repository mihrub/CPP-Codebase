/*
The season of La Liga (football tournament) has just ended, and it’s time to crown the champion! 
In La Liga, there are N teams. Each pair of teams plays two matches against each other: one at home and one away. 
This means that if there are N teams, the total number of matches played is M=N∗(N−1).

How points are awarded in a match(simple rules for non-football fans):
Win: The team that scores more goals in a match than their opponent gets 3 points.
Draw: If both teams score the same number of goals, then each team gets 1 point.
Loss: The team that scores fewer goals than the other team in a match gets 0 points.

At the end of the season, the champion is chosen according to these tie-breaking rules:
The team with the most points among all teams is the champion.
If two or more teams are tied on points, the team with the highest goal difference (GD) wins.
Goal Difference=Goals Scored in a Season−Goals Conceded in a Season
 
If still tied (on total points and goal difference), then the team with the highest total goals scored wins.
If still tied (on total points, goal difference, goals scored), the winner is the team whose name comes first alphabetically (lexicographically smallest).
Your task is to find out the la liga champion of the season!

Input
The first line contains two integers  N and M (2 ≤N ≤ 1000, M = N × (N−1)) — the number of teams and the number of matches.

Each of the next M lines describes one match in the format:

teamA goalsA teamB goalsB

Where:
1. teamA and teamB are the team names, lowercase strings of length from 1 to 20 without spaces (for example, realmadrid).
2. goalsA and goalsB are integers (0≤goalsA, goalsB≤20) representing the number of goals scored by teamA and teamB, respectively.
3. It is guaranteed that every pair of distinct teams appears exactly twice: once with the first team at home and once with the second team at home.

Output
Print the name of the La Liga champion.

*/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

class Team{
public:
    string teamName;
    int goalScored;
    int goalConceed;
    int point;
    Team(){
        goalScored = 0;
        goalConceed = 0;
        point = 0;
    }
    int goalDifference(){
        return goalScored - goalConceed;
    }
};

bool cmp(Team l, Team r){
    if(l.point != r.point){
        return l.point > r.point;
    }
    if(l.goalDifference() != r.goalDifference()){
        return l.goalDifference() > r.goalDifference();
    }
    if(l.goalScored != r.goalScored){
        return l.goalScored > r.goalScored;
    }
    return l.teamName < r.teamName;
}

int main(){

    int totalTeam,totalMatch;
    cin >> totalTeam;
    cin >> totalMatch;
      
    unordered_map<string,Team> team;

    for(int i = 0; i<totalMatch; i++){
        string teamA,teamB;
        int goalA,goalB;
        cin >> teamA >> goalA;
        cin >> teamB >> goalB;

        if (!team.count(teamA)){
            team[teamA] = Team();
        }

        team[teamA].teamName = teamA;
        team[teamA].goalScored += goalA;
        team[teamA].goalConceed += goalB;

        if(!team.count(teamB)){
            team[teamB] = Team();
        }

        team[teamB].teamName = teamB;
        team[teamB].goalScored += goalB;
        team[teamB].goalConceed += goalA;

        if(goalA > goalB){
            team[teamA].point += 3;
        }
        else if(goalA < goalB){
            team[teamB].point += 3;
        }
        else{
            team[teamA].point += 1;
            team[teamA].point += 1;
        }
    }

    vector<Team> standing;

    for(auto it : team){
        standing.push_back(it.second);
    }
    
    sort(standing.begin(),standing.end(),cmp);

    for(auto it : standing){
        cout << "Team Name : " << it.teamName << endl;
        cout << "Point : " << it.point << endl;
        cout << "Goal Scored : " << it.goalScored << endl;
        cout << "Goal Conceed : " << it.goalConceed << endl;
        cout << "Goal Difference : " << it.goalDifference() << endl;
    }

    cout << endl;
    cout << "Winner  : " << standing[0].teamName << endl;

    return 0;
}