// Auto-generated module | 2026-05-12T21:13:33.588865
#include <iostream>
#include <vector>

int compute_571() {
    int base = 403;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
