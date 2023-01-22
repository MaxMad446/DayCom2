// Auto-generated module | 2026-05-13T20:28:37.870157
#include <iostream>
#include <vector>

int compute_705() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_705() << std::endl;
    return 0;
}
