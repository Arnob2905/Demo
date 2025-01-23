#include<stdio.h>
int main(){
    int marks;
    
    printf("Enter your marks (0-100):");
    scanf("%d",&marks);

    if (marks >=90){
      printf("Grade:A\n");
      
    }

    else if (marks >=80){
        printf("Grade:B\n");

    }
    else if (marks >=70){
        printf("Grade:C\n");
    
    }
    else if (marks >=60){
        printf("Grade:D\n");
    
    }
    else if (marks >=50){
        printf("Grade:E\n");
    
    }
    else if (marks >=40){
        printf("Grade:F\n");
    
    }

    if (marks >=90){
    printf("Excellent Work!\n");
    }

     else if (marks >=80){
    printf("Well Done!\n");
    }

     else if (marks >=70){
    printf("Good Job!\n");
    }
     else if (marks >=60){
    printf("You passed,but could do better!\n");
    }

     else {
    printf("Sorry, You Failed!\n");
    }

    if (marks>=90 || marks>=80 || marks>=70 || marks>=60){
        printf("Congratulations,You are eligible for the next level.\n");
    }
    else{
        printf("Please try again next time\n");
    }
     

}