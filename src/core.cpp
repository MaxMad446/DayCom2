// Auto-generated module | 2026-05-12T04:49:23.134750
#include <iostream>
#include <vector>

int compute_318() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_318() << std::endl;
    return 0;
}
