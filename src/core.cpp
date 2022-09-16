// Auto-generated module | 2026-05-11T21:19:15.960050
#include <iostream>
#include <vector>

int compute_139() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_139() << std::endl;
    return 0;
}
