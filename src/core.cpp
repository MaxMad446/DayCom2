// Auto-generated module | 2026-05-11T20:45:09.257208
#include <iostream>
#include <vector>

int compute_561() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_561() << std::endl;
    return 0;
}
