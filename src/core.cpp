// Auto-generated module | 2026-05-13T20:58:52.711411
#include <iostream>
#include <vector>

int compute_929() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_929() << std::endl;
    return 0;
}
