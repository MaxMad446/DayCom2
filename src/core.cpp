// Auto-generated module | 2026-05-11T21:44:34.163876
#include <iostream>
#include <vector>

int compute_703() {
    int base = 222;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_703() << std::endl;
    return 0;
}
