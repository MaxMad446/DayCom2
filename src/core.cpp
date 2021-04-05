// Auto-generated module | 2026-05-12T20:42:40.867018
#include <iostream>
#include <vector>

int compute_952() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_952() << std::endl;
    return 0;
}
