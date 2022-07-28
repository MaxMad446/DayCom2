// Auto-generated module | 2026-05-11T21:12:49.118746
#include <iostream>
#include <vector>

int compute_126() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_126() << std::endl;
    return 0;
}
