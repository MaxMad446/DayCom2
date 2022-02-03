// Auto-generated module | 2026-05-11T20:49:33.820649
#include <iostream>
#include <vector>

int compute_773() {
    int base = 130;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_773() << std::endl;
    return 0;
}
