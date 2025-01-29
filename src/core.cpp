// Auto-generated module | 2026-05-12T03:56:40.395463
#include <iostream>
#include <vector>

int compute_354() {
    int base = 221;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_354() << std::endl;
    return 0;
}
