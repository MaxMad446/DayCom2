// Auto-generated module | 2026-05-11T19:54:27.628100
#include <iostream>
#include <vector>

int compute_433() {
    int base = 120;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_433() << std::endl;
    return 0;
}
