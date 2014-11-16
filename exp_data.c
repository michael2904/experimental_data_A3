#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    //create the new file to open

        FILE * fp;
        char *eNum=NULL;
    //open the file
        fp = fopen (argv[1], "r");
    //check if null
        if(fp!= NULL){
            //create var for line
            char sentence[4096];
            int i=0;
            //get everything in file
            while (fgets(sentence,sizeof(sentence),fp)){
                //initialize values
                double sum=0;
                i++;
                //tokenise the line with every ","
                eNum = strtok(sentence, ",");
                int j=-1;
                //do while to get every value
                while (eNum!=NULL) {
                    j++;
                    if(j==0){
                        //check if its the name
                        printf("%s :",eNum);
                    }
                    else{
                        //check if its value
                        sum+=atof(eNum);
                    }
                    //continue token
                    eNum = strtok(NULL,",");
                
                    }
                //do and print each average
                float average=sum/j;
                printf("average: %.2f \n",average);

                }

            }
        else{printf("no such file");}
    //finish by closing
    fclose(fp);

    return 0;
}

