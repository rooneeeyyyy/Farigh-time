#include <stdio.h>
int getValidDays(){
    int days;
    do{
        printf("Enter the days from 1-7: \n");
        scanf("%d", &days);
        if (days < 1 || days > 7){
            printf("Invalid input, Try Again.\n");
        }
    } while(days < 1 || days >7);
    return days;

}

int calculateDailySales(int days, int totalArr[]){
    int order, totalorder = 0, totalamount, amount;

    for(int i = 0; i < days; i++){
        do
        {
            printf("Enter the number of orders: \n");
            scanf("%d", &order);

            if (order < 1){
                printf("Invalid input. \n");
            }
        } while (order < 1);
        totalorder += order;
        totalamount = 0;
        for(int j = 0; j < order; j++){
            printf("Enter the amount order no.%d: \n", j+1);
            scanf("%d",&amount);
            if(amount > 0){
                totalamount += amount;
            }
            else{
                printf("Amount must be greater than 0 \n");
                j = j-1;
            }
        }
        totalArr[i] = totalamount;
    }
    return totalorder;
}

int findHighestSalesDay(int totalArr[], int days){
    int highest = 0, index = 0;
    for (int i = 0; i < days; i++){
        if (totalArr[i] > highest){
            highest = totalArr[i];
            index = i;
        }
    }
    return index;
}


int main() {
    int days = 0, totalArr[7];
    float average, dayf;
    int total = 0;
    days = getValidDays();
    int totalorders = calculateDailySales( days, totalArr);
    int highestsale = findHighestSalesDay(totalArr, days);

    for (int i = 0; i < days; i++){
        printf("Total sales of day no.%d : %d \n", i+1, totalArr[i]);
        total += totalArr[i];
    }
    dayf = (float)days;
    float totl = (float)total;
    average = totl / dayf;
    printf("The total sales across the whole event is: %d \n", total);
    printf("The average sales on each day is : %.2f \n", average);
    printf("The total numbers of orders received during festivals: %d \n", totalorders);

    for (int i = 0; i < days; i++){
        printf("The sales on day #%d is : %d \n", i + 1, totalArr[i]);

    }
    printf("The highest sale in the festival was on day %d : %d \n", highestsale + 1, totalArr[highestsale]);
    return 0;
}