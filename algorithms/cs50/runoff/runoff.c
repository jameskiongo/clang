#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// Max voters and candidates
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

// preferences[i][j] is jth preference for voter i
int preferences[MAX_VOTERS][MAX_CANDIDATES];

// Candidates have name, vote count, eliminated status
typedef struct {
  char *name;
  int votes;
  bool eliminated;
} candidate;

// Array of candidates
candidate candidates[MAX_CANDIDATES];

// Numbers of voters and candidates
int voter_count;
int candidate_count;

// Function prototypes
bool vote(int voter, int rank, char *name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);

int main(int argc, char *argv[]) {
  // Check for invalid usage
  if (argc < 2) {
    printf("Usage: runoff [candidate ...]\n");
    return 1;
  }

  // Populate array of candidates
  candidate_count = argc - 1;
  if (candidate_count > MAX_CANDIDATES) {
    printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
    return 2;
  }
  for (int i = 0; i < candidate_count; i++) {
    candidates[i].name = argv[i + 1];
    candidates[i].votes = 0;
    candidates[i].eliminated = false;
  }

  /* voter_count = get_int("Number of voters: "); */
  int voter_count;
  printf("Number of voters: ");
  scanf("%i", &voter_count);
  if (voter_count > MAX_VOTERS) {
    printf("Maximum number of voters is %i\n", MAX_VOTERS);
    return 3;
  }

  // Keep querying for votes
  for (int i = 0; i < voter_count; i++) {

    // Query for each rank
    for (int j = 0; j < candidate_count; j++) {
      /* char *name = get_string("Rank %i: ", j + 1); */
      char *name;
      printf("Rank %i: ", j + 1);
      scanf("%s", name);

      // Record vote, unless it's invalid
      /* if (!vote(i, j, name)) { */
      /*   printf("Invalid vote.\n"); */
      /*   return 4; */
      /* } */
      if (strcmp(name, candidates[i].name) == 0) {
      }
    }

    printf("\n");
  }

  // Keep holding runoffs until winner exists
  while (true) {
    // Calculate votes given remaining candidates
    tabulate();

    // Check if election has been won
    bool won = print_winner();
    if (won) {
      break;
    }

    // Eliminate last-place candidates
    int min = find_min();
    bool tie = is_tie(min);

    // If tie, everyone wins
    if (tie) {
      for (int i = 0; i < candidate_count; i++) {
        if (!candidates[i].eliminated) {
          printf("%s\n", candidates[i].name);
        }
      }
      break;
    }

    // Eliminate anyone with minimum number of votes
    eliminate(min);

    // Reset vote counts back to zero
    for (int i = 0; i < candidate_count; i++) {
      candidates[i].votes = 0;
    }
  }
  return 0;
}

// Record preference if vote is valid
bool vote(int voter, int rank, char *name) {
  if (strcmp(name, candidates[rank].name) == 0) {
    candidates[rank].votes += 1;
    return true;
  }
  return false;
}

// Tabulate votes for non-eliminated candidates
void tabulate(void) {
  // TODO
  return;
}

// Print the winner of the election, if there is one
bool print_winner(void) {
  // TODO
  return false;
}

// Return the minimum number of votes any remaining candidate has
int find_min(void) {
  // TODO
  return 0;
}

// Return true if the election is tied between all candidates, false otherwise
bool is_tie(int min) {
  // TODO
  return false;
}

// Eliminate the candidate (or candidates) in last place
void eliminate(int min) {
  // TODO
  return;
}
