// Auto-generated module | 2026-05-14T06:15:33.608794
#include <iostream>
#include <vector>

int compute_227() {
    int base = 361;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_227() << std::endl;
    return 0;
}
