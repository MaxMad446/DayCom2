// Auto-generated module | 2026-05-14T06:14:17.358345
#include <iostream>
#include <vector>

int compute_221() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_221() << std::endl;
    return 0;
}
