// Auto-generated module | 2026-05-11T21:35:44.931387
#include <iostream>
#include <vector>

int compute_691() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_691() << std::endl;
    return 0;
}
