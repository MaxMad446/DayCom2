// Auto-generated module | 2026-05-11T21:10:20.326742
#include <iostream>
#include <vector>

int compute_413() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_413() << std::endl;
    return 0;
}
