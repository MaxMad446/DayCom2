// Auto-generated module | 2026-05-12T06:19:26.002953
#include <iostream>
#include <vector>

int compute_357() {
    int base = 273;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_357() << std::endl;
    return 0;
}
