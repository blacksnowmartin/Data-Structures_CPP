#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int numCandidates;
    
    cout << "Enter the number of candidates: ";
    cin >> numCandidates;
    
    // Create arrays to store candidate names and vote counts
    vector<string> candidateNames(numCandidates);
    vector<int> voteCounts(numCandidates, 0);
    
    // Input candidate names
    for (int i = 0; i < numCandidates; i++) {
        cout << "Enter the name of candidate " << (i + 1) << ": ";
        cin >> candidateNames[i];
    }
    
    // Voting process
    int numVoters;
    cout << "Enter the number of voters: ";
    cin >> numVoters;
    
    for (int i = 0; i < numVoters; i++) {
        cout << "Voter " << (i + 1) << ", please select a candidate by entering the candidate number (1-" << numCandidates << "): ";
        int vote;
        cin >> vote;
        
        if (vote >= 1 && vote <= numCandidates) {
            voteCounts[vote - 1]++;
            cout << "Your vote for " << candidateNames[vote - 1] << " has been recorded." << endl;
        } else {
            cout << "Invalid candidate number. Your vote is not counted." << endl;
        }
    }
    
    // Display election results
    cout << "\nElection Results:" << endl;
    for (int i = 0; i < numCandidates; i++) {
        cout << candidateNames[i] << ": " << voteCounts[i] << " votes" << endl;
    }
    
    // Find the winner
    int maxVotes = 0;
    int winnerIndex = -1;
    
    for (int i = 0; i < numCandidates; i++) {
        if (voteCounts[i] > maxVotes) {
            maxVotes = voteCounts[i];
            winnerIndex = i;
        }
    }
    
    if (winnerIndex != -1) {
        cout << "\nWinner: " << candidateNames[winnerIndex] << " with " << maxVotes << " votes!" << endl;
    } else {
        cout << "\nNo winner. It's a tie!" << endl;
    }
    
    return 0;
}
//Proudly written by Blacksnow Martin
