// Auto-generated module | 2026-05-11T22:52:31.342702
#include <iostream>
#include <vector>

int compute_138() {
    int base = 144;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_138() << std::endl;
    return 0;
}
