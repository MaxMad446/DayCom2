// Auto-generated module | 2026-05-12T04:10:33.205902
#include <iostream>
#include <vector>

int compute_691() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_691() << std::endl;
    return 0;
}
