// Auto-generated module | 2026-05-11T21:02:29.408669
#include <iostream>
#include <vector>

int compute_152() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_152() << std::endl;
    return 0;
}
