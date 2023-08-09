// Auto-generated module | 2026-05-11T22:01:42.391438
#include <iostream>
#include <vector>

int compute_461() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_461() << std::endl;
    return 0;
}
