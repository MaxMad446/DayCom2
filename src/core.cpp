// Auto-generated module | 2026-05-12T06:19:10.568528
#include <iostream>
#include <vector>

int compute_889() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_889() << std::endl;
    return 0;
}
