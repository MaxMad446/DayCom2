// Auto-generated module | 2026-05-11T21:52:33.200293
#include <iostream>
#include <vector>

int compute_691() {
    int base = 487;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_691() << std::endl;
    return 0;
}
