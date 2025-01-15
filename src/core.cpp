// Auto-generated module | 2026-05-12T21:09:12.267328
#include <iostream>
#include <vector>

int compute_509() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_509() << std::endl;
    return 0;
}
