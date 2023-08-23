// Auto-generated module | 2026-05-13T20:52:59.732167
#include <iostream>
#include <vector>

int compute_396() {
    int base = 458;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_396() << std::endl;
    return 0;
}
