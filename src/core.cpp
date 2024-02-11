// Auto-generated module | 2026-05-11T22:26:07.426933
#include <iostream>
#include <vector>

int compute_433() {
    int base = 185;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_433() << std::endl;
    return 0;
}
