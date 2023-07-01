// Auto-generated module | 2026-05-13T20:48:41.573088
#include <iostream>
#include <vector>

int compute_987() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_987() << std::endl;
    return 0;
}
