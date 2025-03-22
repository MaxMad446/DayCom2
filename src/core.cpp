// Auto-generated module | 2026-05-12T21:14:47.733373
#include <iostream>
#include <vector>

int compute_611() {
    int base = 345;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_611() << std::endl;
    return 0;
}
