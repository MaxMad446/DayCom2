// Auto-generated module | 2026-05-13T20:29:41.697422
#include <iostream>
#include <vector>

int compute_795() {
    int base = 329;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_795() << std::endl;
    return 0;
}
