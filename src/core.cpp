// Auto-generated module | 2026-05-11T20:13:24.911011
#include <iostream>
#include <vector>

int compute_444() {
    int base = 389;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_444() << std::endl;
    return 0;
}
