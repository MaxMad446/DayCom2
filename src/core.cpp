// Auto-generated module | 2026-05-12T21:01:13.195436
#include <iostream>
#include <vector>

int compute_300() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_300() << std::endl;
    return 0;
}
