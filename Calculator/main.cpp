#include <iostream>
int calc(int num1, int num2, char *op){
    if(op == "*") {
        return num1 * num2;
    }
    else if(op == "+") {
        return num1 + num2;
    }
    else if(op == "-") {
        return num1 - num2;
    }
    else if(op == "/") {
        return num1 / num2;
    }
    else {
        return false;
    }
}
int main() {
    int result = calc(5,6,"+");
    if(result == false) {
        std::cout << "No such operation" << std::endl;
    }
    else {
        std::cout << result << std::endl;
    }
    return 0;
}
