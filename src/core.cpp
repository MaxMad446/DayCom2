// Auto-generated module | 2026-05-11T21:44:13.788536
#include <iostream>
#include <vector>

int compute_878() {
    int base = 340;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_878() << std::endl;
    return 0;
}
