// Auto-generated module | 2026-05-14T18:19:33.192807
#include <iostream>
#include <vector>

int compute_229() {
    int base = 419;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_229() << std::endl;
    return 0;
}
