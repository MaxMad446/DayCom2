// Auto-generated module | 2026-05-11T21:47:33.948625
#include <iostream>
#include <vector>

int compute_642() {
    int base = 221;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_642() << std::endl;
    return 0;
}
