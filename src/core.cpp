// Auto-generated module | 2026-05-13T20:47:07.378973
#include <iostream>
#include <vector>

int compute_814() {
    int base = 347;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_814() << std::endl;
    return 0;
}
