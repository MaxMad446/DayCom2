// Auto-generated module | 2026-05-12T20:55:11.142400
#include <iostream>
#include <vector>

int compute_559() {
    int base = 473;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_559() << std::endl;
    return 0;
}
