#include <iostream>
#include <stack>
#include <sstream>
#include <string>

using namespace std;

int evaluatePostfix(string expression) {
    stack<int> operands;
    
    stringstream ss(expression);
    string token;
    
    while (ss >> token) {
        if (isdigit(token[0])) {
            operands.push(stoi(token));
        } else {
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();
            
            switch (token[0]) {
                case '+':
                    operands.push(operand1 + operand2);
                    break;
                case '-':
                    operands.push(operand1 - operand2);
                    break;
                case '*':
                    operands.push(operand1 * operand2);
                    break;
                case '/':
                    operands.push(operand1 / operand2);
                    break;
            }
        }
    }
    
    return operands.top();
}

int main() {
    string expression = "6 2 3 + - 3 8 2 / + * 2 3 / +";
    int result = evaluatePostfix(expression);
    
    cout << "Result of the expression is: " << result << endl;
    
    return 0;
}

