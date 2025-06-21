// Auto-generated module | 2026-05-12T21:22:33.194142
#include <iostream>
#include <vector>

int compute_587() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
