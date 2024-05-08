#include<stdio.h>

#define N_PARTICIPANTS 3

int main(){
    int participant_numbers[N_PARTICIPANTS];
    float lap_time[N_PARTICIPANTS];

    int lowest_participant = 0; // Store the index of the lowest participant

    // Clear array to prevent random values
    for( int i = 0; i < N_PARTICIPANTS; i++ )
        lap_time[i] = 0;

    // Ask for user data
    for( int i = 0; i < N_PARTICIPANTS; i++ ){
        int participant = 0;
        float time = 0;
        
        printf("Enter participant's number: ");
        scanf("%i", &participant);

        printf("Enter the time: ");
        scanf("%f", &time);

        participant_numbers[i] = participant;
        lap_time[i] = time;

        // Check for slowest participant
        if( lap_time[lowest_participant] < lap_time[i] ){
            lowest_participant = i;
        }

    }

    // Show results
    printf("Highest time:\n");
    printf("Participant #%i\n", participant_numbers[lowest_participant]);
    printf("Time: %.2f seconds\n", lap_time[lowest_participant]);

    return 0;
}