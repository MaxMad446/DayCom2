// Auto-generated module | 2026-05-13T20:52:31.396234
#include <iostream>
#include <vector>

int compute_837() {
    int base = 274;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_837() << std::endl;
    return 0;
}
