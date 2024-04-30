// Use a Finite State Machine (FSM) to solve the following problem: A sequence detector receives
// integers at its input, one integer at a time. The FSM outputs a 1 (integer) only if among the last
// three inputs exactly two were odd numbers. Otherwise, the FSM outputs a 0 (integer)

// even, odd
// f_digit, s_digitl, t_digit
// 0, 1, 2, 3, 4, 5, 6, 7
// EEE, EEO, EOE, EOO, OEE, OEO, OOE, OOO
// []

// even, odd
// fist []
// sec  []
// thir []


int main(){
    int next_state_table[8][2] = {
        {0, 1},
        {2, 3},
        {4, 5},
        {6, },
    };
    int output_tablep[8][2] = {
        {0, 0},
    }

    int input[] = [2, 4, 6, 7, 3, 6, 7, 9];
    int check[3];

    return 0;
}