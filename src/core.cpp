// Auto-generated module | 2026-05-12T20:00:18.403682
#include <iostream>
#include <vector>

int compute_693() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_693() << std::endl;
    return 0;
}
