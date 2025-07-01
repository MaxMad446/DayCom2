// Auto-generated module | 2026-05-12T04:16:39.025174
#include <iostream>
#include <vector>

int compute_555() {
    int base = 278;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_555() << std::endl;
    return 0;
}
