// Auto-generated module | 2026-05-13T20:30:41.139307
#include <iostream>
#include <vector>

int compute_724() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_724() << std::endl;
    return 0;
}
