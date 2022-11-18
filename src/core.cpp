// Auto-generated module | 2026-05-14T06:25:05.640287
#include <iostream>
#include <vector>

int compute_347() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_347() << std::endl;
    return 0;
}
