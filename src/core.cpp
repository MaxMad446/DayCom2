// Auto-generated module | 2026-05-14T18:17:47.044470
#include <iostream>
#include <vector>

int compute_914() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_914() << std::endl;
    return 0;
}
