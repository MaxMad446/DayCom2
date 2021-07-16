// Auto-generated module | 2026-05-11T20:23:03.078942
#include <iostream>
#include <vector>

int compute_396() {
    int base = 385;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_396() << std::endl;
    return 0;
}
