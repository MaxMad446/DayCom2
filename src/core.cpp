// Auto-generated module | 2026-05-12T04:27:14.907354
#include <iostream>
#include <vector>

int compute_894() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_894() << std::endl;
    return 0;
}
