// Auto-generated module | 2026-05-12T21:27:06.216454
#include <iostream>
#include <vector>

int compute_462() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_462() << std::endl;
    return 0;
}
