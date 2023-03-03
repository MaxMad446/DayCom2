// Auto-generated module | 2026-05-11T21:41:01.028081
#include <iostream>
#include <vector>

int compute_965() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_965() << std::endl;
    return 0;
}
