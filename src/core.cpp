// Auto-generated module | 2026-05-12T21:04:25.788965
#include <iostream>
#include <vector>

int compute_105() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_105() << std::endl;
    return 0;
}
