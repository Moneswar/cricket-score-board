#include <stdio.h>

// Structure to represent a team's scoreboard
struct Scoreboard {
    int runs;
    int wickets;
    float overs;
};

// Function prototypes
void updateScore(struct Scoreboard *team, int runs, int wickets, float overs);
void displayScore(struct Scoreboard team);

int main() {
    // Initialize the scoreboard
    struct Scoreboard team;

    team.runs = 0;
    team.wickets = 0;
    team.overs = 0.0;

    // Example: Update the score
    updateScore(&team, 50, 1, 10.3); // 50 runs, 1 wicket, 10.3 overs

    // Display the updated score
    displayScore(team);

    return 0;
}

// Function to update the scoreboard
void updateScore(struct Scoreboard *team, int runs, int wickets, float overs) {
    team->runs += runs;
    team->wickets += wickets;
    team->overs += overs;
}

// Function to display the scoreboard
void displayScore(struct Scoreboard team) {
    printf("Scoreboard\n");
    printf("Runs: %d\n", team.runs);
    printf("Wickets: %d\n", team.wickets);
    printf("Overs: %.1f\n", team.overs);
}
