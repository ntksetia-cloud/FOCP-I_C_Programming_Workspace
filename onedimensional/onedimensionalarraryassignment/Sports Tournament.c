//Sports Tournament Scoreboard The scores obtained by a player in N rounds of a tournament are stored in an array.
//Display the scores in reverse order and calculate the player's total score.
#include <stdio.h>
int main(){
    int total_scores = 0;
    int n;
    printf("Enter the number of rounds of tournament:");
    scanf("%d",&n);
    //defining an array that stores the scores of the players
    int scorecard[n];
    for (int i = 0; i<n; i++){
        printf("Enter the scores of the player:");
        scanf("%d",&scorecard[i]);
    }
    //reverse scores and total scores.
    printf("The sum of scores are %d",total_scores);
    for(int i =n-1;i>=0;i--){
        printf("%d\n",scorecard[i]);
    }
    for (int i = 0; i<n; i++){
        total_scores = total_scores + scorecard[i];
    }
    printf("The sum of scores are %d",total_scores);
    return 0;
}