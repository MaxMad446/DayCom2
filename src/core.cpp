// Auto-generated module | 2026-05-13T21:02:06.287137
#include <iostream>
#include <vector>

int compute_771() {
    int base = 227;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_771() << std::endl;
    return 0;
}
