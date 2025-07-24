// Auto-generated module | 2026-05-12T04:19:47.685171
#include <iostream>
#include <vector>

int compute_497() {
    int base = 147;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_497() << std::endl;
    return 0;
}
