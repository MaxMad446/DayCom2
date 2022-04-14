// Auto-generated module | 2026-05-11T20:58:30.706313
#include <iostream>
#include <vector>

int compute_615() {
    int base = 483;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_615() << std::endl;
    return 0;
}
