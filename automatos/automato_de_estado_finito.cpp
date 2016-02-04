#include <iostream>

#define INITIALSTATE 'A'
#define FINALSTATE 'A'

using namespace std;

char alphabet[] = {'0', '1'};
char transitions[][3] = {
	{'A', '0', 'B'},
	{'A', '1', 'A'},
	{'B', '0', 'A'},
	{'B', '1', 'B'}
};

char getState(char state, char letter);
bool valAlphabet(char letter);
bool automaton(char state);

int main(){
    char state=INITIALSTATE;
    
    cout << (automaton(state) ? "Valida!" : "Invalida!") << endl;
    
    return 0;
}

char getState(char state, char letter){
	for(int i=0; i<sizeof(transitions) / sizeof(transitions[0]); i++)
		if(transitions[i][0]==state)
			if(transitions[i][1]==letter)
				return transitions[i][2];
	
	return ' ';
}

bool valAlphabet(char letter){
	bool val = false;
	for(int i=0; i<sizeof(alphabet); i++)
		if(letter == alphabet[i])
			val = true;
			
	return val;
}

bool automaton(char state){
	char letter;
	
    while(cin >> letter){
        if(!valAlphabet(letter))
        	return false;
        	
        state = getState(state, letter);
    }
    
    if(state==FINALSTATE)
    	return true;
    else
    	return false;
}