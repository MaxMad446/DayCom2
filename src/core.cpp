// Auto-generated module | 2026-05-11T20:05:21.353500
#include <iostream>
#include <vector>

int compute_848() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_848() << std::endl;
    return 0;
}
