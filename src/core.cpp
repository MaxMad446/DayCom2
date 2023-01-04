// Auto-generated module | 2026-05-11T21:33:42.361753
#include <iostream>
#include <vector>

int compute_175() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_175() << std::endl;
    return 0;
}
