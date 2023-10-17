// Auto-generated module | 2026-05-11T22:10:48.220675
#include <iostream>
#include <vector>

int compute_902() {
    int base = 419;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_902() << std::endl;
    return 0;
}
