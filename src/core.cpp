// Auto-generated module | 2026-05-11T22:34:13.828464
#include <iostream>
#include <vector>

int compute_433() {
    int base = 346;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_433() << std::endl;
    return 0;
}
