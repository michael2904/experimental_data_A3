//
//  main.c
//  experimental_data
//
//  Created by Michael Abdallah-Minciotti on 2014-11-11.
//  Copyright (c) 2014 Michael Abdallah-Minciotti. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, const char * argv[]) {
        FILE * fp;
        char *eNum=NULL;
        fp = fopen (argv[1], "r");
        if(fp!= NULL){
            char sentence[4096];
            int i=0;
            while (fgets(sentence,sizeof(sentence),fp)){
                double sum=0;
                i++;
                eNum = strtok(sentence, ",");
                int j=-1;
                while (eNum!=NULL) {
                    j++;
                    if(j==0){
                        printf("%s :",eNum);
                    }
                    else{
                        sum+=atof(eNum);
                    }
                    eNum = strtok(NULL,",");
                
                    }
                float average=sum/j;
                printf("average: %.2f \n",average);

                }

            }
        else{printf("no such file");}
        fclose(fp);

    return 0;
}
