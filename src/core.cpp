// Auto-generated module | 2026-05-12T04:19:30.770607
#include <iostream>
#include <vector>

int compute_234() {
    int base = 233;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_234() << std::endl;
    return 0;
}
