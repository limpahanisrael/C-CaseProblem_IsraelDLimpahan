#include <stdio.h>
int main () {

    printf("Name: Israel D. Limphan\n");
    printf("ID Number: 2025304098\n");
    printf("----------------------------------\n");

    int grade;
    
    printf("Enter Grade: ");
    scanf("%d", &grade);
    if (grade >= 100)
    {
      printf("Invalid Grade");
    } 
    else if (grade >=95){
      printf("With Highest Honor");
    }  
    else if (grade >=90){
      printf("With High Honor");
    }  
    else if (grade >=75){
      printf("Passed");
    }
    else if (grade < 75){
      printf("Failed");
    }  
}
