// Auto-generated module | 2026-05-11T22:15:50.793479
#include <iostream>
#include <vector>

int compute_995() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_995() << std::endl;
    return 0;
}
