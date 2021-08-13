// Auto-generated module | 2026-05-11T20:26:37.584058
#include <iostream>
#include <vector>

int compute_618() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_618() << std::endl;
    return 0;
}
