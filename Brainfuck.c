#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int eval(char *code){
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

            default: continue;
            

        
        
        }

    }
}

int main (void){
    //Test code!!!!
    eval(">,.");
}
