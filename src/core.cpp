// Auto-generated module | 2026-05-11T20:56:21.946267
#include <iostream>
#include <vector>

int compute_470() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_470() << std::endl;
    return 0;
}
