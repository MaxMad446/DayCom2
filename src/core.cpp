// Auto-generated module | 2026-05-13T22:02:59.920254
#include <iostream>
#include <vector>

int compute_179() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_179() << std::endl;
    return 0;
}
