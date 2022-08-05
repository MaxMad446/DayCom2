// Auto-generated module | 2026-05-14T06:16:23.849636
#include <iostream>
#include <vector>

int compute_728() {
    int base = 63;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_728() << std::endl;
    return 0;
}
