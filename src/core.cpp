// Auto-generated module | 2026-05-12T20:01:20.255691
#include <iostream>
#include <vector>

int compute_612() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_612() << std::endl;
    return 0;
}
