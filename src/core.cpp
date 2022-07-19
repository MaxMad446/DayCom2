// Auto-generated module | 2026-05-14T06:15:09.026151
#include <iostream>
#include <vector>

int compute_633() {
    int base = 475;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_633() << std::endl;
    return 0;
}
