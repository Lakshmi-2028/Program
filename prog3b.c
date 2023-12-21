#include <stdio.h>
#include <math.h>

int main() {
    int totalHoursNeeded, numDays, numWorkers;
    
    printf("Enter total number of hours needed, number of days, and number of workers: ");
    scanf("%d %d %d", &totalHoursNeeded, &numDays, &numWorkers);
    
    double totalWorkingHours = (numDays - (0.1 * numDays)) * numWorkers * 10;
    int hoursNeeded = ceil(totalHoursNeeded / (double)numWorkers);
    
    if (totalWorkingHours >= totalHoursNeeded) {
        int hoursLeft = totalWorkingHours - totalHoursNeeded;
        printf("Yes! %d hours left.\n", hoursLeft);
    } else {
        int additionalHours = totalHoursNeeded - totalWorkingHours;
        printf("Not enough time! %d hours needed.\n", additionalHours);
    }
    
    return 0;
}
