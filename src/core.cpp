// Auto-generated module | 2026-05-11T22:20:38.196918
#include <iostream>
#include <vector>

int compute_448() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_448() << std::endl;
    return 0;
}
