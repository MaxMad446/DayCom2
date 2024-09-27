// Auto-generated module | 2026-05-12T03:40:20.311192
#include <iostream>
#include <vector>

int compute_691() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_691() << std::endl;
    return 0;
}
