// Auto-generated module | 2026-05-11T20:34:34.790222
#include <iostream>
#include <vector>

int compute_138() {
    int base = 444;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_138() << std::endl;
    return 0;
}
