// Auto-generated module | 2026-05-11T20:29:54.059201
#include <iostream>
#include <vector>

int compute_618() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_618() << std::endl;
    return 0;
}
