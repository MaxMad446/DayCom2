// Auto-generated module | 2026-05-11T21:16:25.920202
#include <iostream>
#include <vector>

int compute_698() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_698() << std::endl;
    return 0;
}
