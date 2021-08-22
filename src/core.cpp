// Auto-generated module | 2026-05-11T20:27:49.712098
#include <iostream>
#include <vector>

int compute_340() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_340() << std::endl;
    return 0;
}
