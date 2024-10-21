// Auto-generated module | 2026-05-12T03:43:33.181512
#include <iostream>
#include <vector>

int compute_442() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_442() << std::endl;
    return 0;
}
