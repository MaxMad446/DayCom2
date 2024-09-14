// Auto-generated module | 2026-05-12T03:38:51.199897
#include <iostream>
#include <vector>

int compute_442() {
    int base = 182;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_442() << std::endl;
    return 0;
}
