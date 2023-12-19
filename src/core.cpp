// Auto-generated module | 2026-05-11T22:19:02.326464
#include <iostream>
#include <vector>

int compute_623() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_623() << std::endl;
    return 0;
}
