#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Info {
    char title[21];
    int credit;
    char instructor[16];
    int suggest_order;
} Info;


int main(){
    FILE *fin1, *fin2;
    char line[100];
    int row = 0;

    fin1 = fopen("input.txt", "r");
    fin2 = fopen("input.txt", "r");


    if(fin1 == NULL || fin2 == NULL){
        printf("input.txt file not found\n");
        exit(1);
    }

    while((fgets(line, 100, fin1)) != NULL){
        row += 1;
    }
    fclose(fin1);

    Info *all_info = (Info*) malloc(row * sizeof(Info));

    int count = 0;

    while(fgets(line, 100, fin2)){
        printf("%s", line);
        if(count % 5 == 0){
            strcpy(all_info[count % 5].title, line);
        }
        else if(count % 5 == 1){
            all_info[count % 5].credit = line;
            // strcpy(all_info[count % 5].credit, line);
        }
        else if(count % 5 == 2){
            strcpy(all_info[count % 5].instructor, line);
        }
        else if(count % 5 == 3){
            all_info[count % 5].suggest_order = line;
            // strcpy(all_info[count % 5].suggest_order, line);
        }
        
        count += 1;
    }

    for(int i = 0 ; i < row ; i++){
        printf("%s %d %s %d\n", all_info[i].title, all_info[i].credit, all_info[i].instructor, all_info[i].suggest_order);
    }

    fclose(fin2);
    free(all_info);
    
}
