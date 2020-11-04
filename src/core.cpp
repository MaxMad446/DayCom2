// Auto-generated module | 2026-05-12T19:58:41.708147
#include <iostream>
#include <vector>

int compute_703() {
    int base = 415;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_703() << std::endl;
    return 0;
}
