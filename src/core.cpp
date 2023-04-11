// Auto-generated module | 2026-05-13T20:35:22.406309
#include <iostream>
#include <vector>

int compute_971() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_971() << std::endl;
    return 0;
}
