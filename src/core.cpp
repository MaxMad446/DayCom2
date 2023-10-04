// Auto-generated module | 2026-05-13T20:56:29.341678
#include <iostream>
#include <vector>

int compute_101() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_101() << std::endl;
    return 0;
}
