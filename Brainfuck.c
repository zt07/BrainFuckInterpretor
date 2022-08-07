#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int error(void){
    perror("Unbalanced Braces\n");
    return 1;
}

int interpret(char *code){
    //Goes thorugh array manipulating digits. As dsetermined through the program.
    int ptr = 0;                   
    char tape[30000] = {0}; //Initialize a Array or tape with 30,000 elements with the value of 0 in each index.
    for (int i = 0; i<strlen(code); i++){ // Goes through the code arguemnt passedm.
        switch (code[i]){
            case '>':
				ptr++;
				break;
			case '<':
				ptr--;
				break;
            case '+':
                tape[ptr]++;
                break;
            case '-':
                tape[ptr]--;
                break;
            case '.':
                putchar(tape[ptr]);
                break;
            case ',':
                tape[ptr] = getchar();
                break;
            case ']':
                error();
                break;
            case '[':
                //If a loop is found, it will go through the loop until the loop is finished.
                while (tape[ptr]){
                    int j = 1;
                    while (j){
                        i++;
                        switch (code[i]){
                            case '[':
                                j++;
                                break;
                            case ']':
                                j--;
                                break;
                        }
                    }


             
                


                


                }
                default: continue;
                //Roll back to 0 or 255 if the value is greater than 255 or less than 0.
                /*
                if (tape[ptr] > 255){
                    tape[ptr] = 0;
                }
                else if (tape[ptr] < 0){
                    tape[ptr] = 255;
                }
                */
            

        
        
        }

    }
}

int main (void){
    //Test code!!!!

    interpret("++++++++++[>+++++++>++++++++++>+++>+<<<<-]>++.");

}
