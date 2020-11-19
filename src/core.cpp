// Auto-generated module | 2026-05-12T19:59:49.948783
#include <iostream>
#include <vector>

int compute_525() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_525() << std::endl;
    return 0;
}
