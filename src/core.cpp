// Auto-generated module | 2026-05-11T21:36:07.247822
#include <iostream>
#include <vector>

int compute_912() {
    int base = 151;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_912() << std::endl;
    return 0;
}
