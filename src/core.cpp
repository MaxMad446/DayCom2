// Auto-generated module | 2026-05-11T21:26:45.653641
#include <iostream>
#include <vector>

int compute_406() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_406() << std::endl;
    return 0;
}
