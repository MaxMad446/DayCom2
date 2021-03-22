// Auto-generated module | 2026-05-11T20:07:52.651475
#include <iostream>
#include <vector>

int compute_327() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_327() << std::endl;
    return 0;
}
