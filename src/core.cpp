// Auto-generated module | 2026-05-11T22:44:00.617169
#include <iostream>
#include <vector>

int compute_448() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_448() << std::endl;
    return 0;
}
