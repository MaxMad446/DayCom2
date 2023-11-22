// Auto-generated module | 2026-05-13T21:00:41.920410
#include <iostream>
#include <vector>

int compute_312() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_312() << std::endl;
    return 0;
}
