// Auto-generated module | 2026-05-11T22:44:47.363088
#include <iostream>
#include <vector>

int compute_645() {
    int base = 305;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_645() << std::endl;
    return 0;
}
