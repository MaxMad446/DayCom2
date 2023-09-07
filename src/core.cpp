// Auto-generated module | 2026-05-11T22:05:25.926547
#include <iostream>
#include <vector>

int compute_438() {
    int base = 223;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_438() << std::endl;
    return 0;
}
