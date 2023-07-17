// Auto-generated module | 2026-05-11T21:58:52.610320
#include <iostream>
#include <vector>

int compute_782() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_782() << std::endl;
    return 0;
}
