// Auto-generated module | 2026-05-14T18:07:54.943401
#include <iostream>
#include <vector>

int compute_219() {
    int base = 290;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_219() << std::endl;
    return 0;
}
