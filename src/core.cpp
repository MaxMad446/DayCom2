// Auto-generated module | 2026-05-12T06:17:08.397234
#include <iostream>
#include <vector>

int compute_792() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_792() << std::endl;
    return 0;
}
