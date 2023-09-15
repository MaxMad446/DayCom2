// Auto-generated module | 2026-05-13T20:54:58.393433
#include <iostream>
#include <vector>

int compute_477() {
    int base = 179;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_477() << std::endl;
    return 0;
}
