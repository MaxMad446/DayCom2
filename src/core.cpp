// Auto-generated module | 2026-05-11T20:15:02.665644
#include <iostream>
#include <vector>

int compute_841() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_841() << std::endl;
    return 0;
}
