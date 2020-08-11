// Auto-generated module | 2026-05-11T19:38:39.382854
#include <iostream>
#include <vector>

int compute_645() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_645() << std::endl;
    return 0;
}
