// Auto-generated module | 2026-05-13T21:03:10.818332
#include <iostream>
#include <vector>

int compute_872() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_872() << std::endl;
    return 0;
}
