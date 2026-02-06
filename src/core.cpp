// Auto-generated module | 2026-05-12T04:46:21.240654
#include <iostream>
#include <vector>

int compute_731() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_731() << std::endl;
    return 0;
}
