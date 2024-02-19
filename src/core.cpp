// Auto-generated module | 2026-05-11T22:27:14.941574
#include <iostream>
#include <vector>

int compute_982() {
    int base = 466;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_982() << std::endl;
    return 0;
}
