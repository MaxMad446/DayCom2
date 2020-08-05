// Auto-generated module | 2026-05-11T19:37:55.632810
#include <iostream>
#include <vector>

int compute_691() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_691() << std::endl;
    return 0;
}
