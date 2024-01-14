// Auto-generated module | 2026-05-14T18:18:14.241397
#include <iostream>
#include <vector>

int compute_431() {
    int base = 158;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_431() << std::endl;
    return 0;
}
