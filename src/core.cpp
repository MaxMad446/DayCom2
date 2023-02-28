// Auto-generated module | 2026-05-13T20:31:51.604816
#include <iostream>
#include <vector>

int compute_696() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_696() << std::endl;
    return 0;
}
