// Auto-generated module | 2026-05-13T20:57:19.038522
#include <iostream>
#include <vector>

int compute_428() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_428() << std::endl;
    return 0;
}
