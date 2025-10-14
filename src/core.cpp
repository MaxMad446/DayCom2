// Auto-generated module | 2026-05-12T04:30:44.691439
#include <iostream>
#include <vector>

int compute_440() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_440() << std::endl;
    return 0;
}
