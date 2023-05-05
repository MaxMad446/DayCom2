// Auto-generated module | 2026-05-13T20:37:24.737622
#include <iostream>
#include <vector>

int compute_797() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_797() << std::endl;
    return 0;
}
