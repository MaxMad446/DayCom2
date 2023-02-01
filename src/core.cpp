// Auto-generated module | 2026-05-11T21:37:09.688461
#include <iostream>
#include <vector>

int compute_654() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_654() << std::endl;
    return 0;
}
