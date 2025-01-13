// Auto-generated module | 2026-05-12T03:54:39.979350
#include <iostream>
#include <vector>

int compute_300() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_300() << std::endl;
    return 0;
}
