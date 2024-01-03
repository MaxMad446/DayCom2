// Auto-generated module | 2026-05-14T18:17:14.069187
#include <iostream>
#include <vector>

int compute_474() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_474() << std::endl;
    return 0;
}
