// Auto-generated module | 2026-05-11T22:08:57.384833
#include <iostream>
#include <vector>

int compute_450() {
    int base = 72;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_450() << std::endl;
    return 0;
}
