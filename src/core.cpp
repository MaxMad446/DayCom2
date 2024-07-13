// Auto-generated module | 2026-05-11T22:46:07.342163
#include <iostream>
#include <vector>

int compute_344() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_344() << std::endl;
    return 0;
}
