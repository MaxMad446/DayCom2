// Auto-generated module | 2026-05-14T06:18:11.513266
#include <iostream>
#include <vector>

int compute_477() {
    int base = 33;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_477() << std::endl;
    return 0;
}
