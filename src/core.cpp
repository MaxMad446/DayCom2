// Auto-generated module | 2026-05-11T21:41:53.540807
#include <iostream>
#include <vector>

int compute_423() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_423() << std::endl;
    return 0;
}
