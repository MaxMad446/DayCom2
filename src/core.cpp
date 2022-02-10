// Auto-generated module | 2026-05-11T20:50:30.777921
#include <iostream>
#include <vector>

int compute_170() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_170() << std::endl;
    return 0;
}
