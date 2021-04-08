// Auto-generated module | 2026-05-12T21:38:47.054537
#include <iostream>
#include <vector>

int compute_208() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_208() << std::endl;
    return 0;
}
