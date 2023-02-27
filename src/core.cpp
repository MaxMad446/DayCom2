// Auto-generated module | 2026-05-11T21:40:28.184093
#include <iostream>
#include <vector>

int compute_426() {
    int base = 341;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_426() << std::endl;
    return 0;
}
