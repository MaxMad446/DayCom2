// Auto-generated module | 2026-05-11T22:36:21.575235
#include <iostream>
#include <vector>

int compute_594() {
    int base = 401;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_594() << std::endl;
    return 0;
}
