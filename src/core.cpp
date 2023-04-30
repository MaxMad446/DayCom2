// Auto-generated module | 2026-05-13T20:36:55.901439
#include <iostream>
#include <vector>

int compute_987() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_987() << std::endl;
    return 0;
}
