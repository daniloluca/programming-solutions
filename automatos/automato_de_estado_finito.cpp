#include <iostream>

using namespace std;

char initialState = 'A';
char finalStates[] = {'A'};
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
	
    cout << (automaton(initialState) ? "Valida!" : "Invalida!") << endl;
    
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
	for(int i=0; i<sizeof(alphabet); i++)
		if(letter == alphabet[i])
			return true;
			
	return false;
}

bool automaton(char state){
	char letter;
	
    while(cin >> letter){
        if(!valAlphabet(letter))
        	return false;
        	
        state = getState(state, letter);
    }
    
    for(int i=0; i<sizeof(finalStates); i++)
	    if(state==finalStates[i])
    		return true;
    	
    return false;
}