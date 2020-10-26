// Auto-generated module | 2026-05-14T18:03:18.436702
#include <iostream>
#include <vector>

int compute_797() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_797() << std::endl;
    return 0;
}
