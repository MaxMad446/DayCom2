// Auto-generated module | 2026-05-12T19:58:48.575528
#include <iostream>
#include <vector>

int compute_403() {
    int base = 261;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_403() << std::endl;
    return 0;
}
