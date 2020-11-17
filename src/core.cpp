// Auto-generated module | 2026-05-11T19:51:46.205412
#include <iostream>
#include <vector>

int compute_322() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_322() << std::endl;
    return 0;
}
