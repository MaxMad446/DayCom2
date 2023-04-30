// Auto-generated module | 2026-05-11T21:48:16.774207
#include <iostream>
#include <vector>

int compute_194() {
    int base = 487;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_194() << std::endl;
    return 0;
}
