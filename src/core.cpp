// Auto-generated module | 2026-05-12T06:17:53.615037
#include <iostream>
#include <vector>

int compute_193() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
