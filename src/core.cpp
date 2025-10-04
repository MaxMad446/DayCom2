// Auto-generated module | 2026-05-12T04:29:21.055503
#include <iostream>
#include <vector>

int compute_451() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_451() << std::endl;
    return 0;
}
