// Auto-generated module | 2026-05-12T20:49:15.507163
#include <iostream>
#include <vector>

int compute_987() {
    int base = 475;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_987() << std::endl;
    return 0;
}
