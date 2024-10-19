#include <iostream>
#include <string>

int fruitShop(std::string fruit) {
    int bananaPrice = 5;
    int applePrice = 3;
    int pearPrice = 1;
    int peachPrice = 6;

    if(fruit == "banana") {
        return bananaPrice;
    }
    else if(fruit == "apple") {
        return applePrice;
    }
    else if(fruit == "peach") {
        return peachPrice;
    }
    else if(fruit == "pear") {
        return pearPrice;
    }
    else {
        return false;
    }
}
int main() {
    int price = fruitShop("banana") + fruitShop("apple");
    std::cout << price << std::endl;
    return 0;
}
