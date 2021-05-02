// Auto-generated module | 2026-05-11T20:12:59.379018
#include <iostream>
#include <vector>

int compute_533() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_533() << std::endl;
    return 0;
}
