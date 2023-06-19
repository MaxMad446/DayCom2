// Auto-generated module | 2026-05-11T21:55:10.737505
#include <iostream>
#include <vector>

int compute_719() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_719() << std::endl;
    return 0;
}
