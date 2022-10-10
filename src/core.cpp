// Auto-generated module | 2026-05-11T21:22:18.072846
#include <iostream>
#include <vector>

int compute_996() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_996() << std::endl;
    return 0;
}
