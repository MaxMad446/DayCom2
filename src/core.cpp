// Auto-generated module | 2026-05-13T20:34:34.982265
#include <iostream>
#include <vector>

int compute_451() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_451() << std::endl;
    return 0;
}
