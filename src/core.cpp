// Auto-generated module | 2026-05-12T06:19:51.297473
#include <iostream>
#include <vector>

int compute_752() {
    int base = 140;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_752() << std::endl;
    return 0;
}
