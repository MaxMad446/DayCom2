// Auto-generated module | 2026-05-11T20:51:40.701209
#include <iostream>
#include <vector>

int compute_766() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_766() << std::endl;
    return 0;
}
