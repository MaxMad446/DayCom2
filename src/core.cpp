// Auto-generated module | 2026-05-14T18:15:45.262324
#include <iostream>
#include <vector>

int compute_318() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_318() << std::endl;
    return 0;
}
