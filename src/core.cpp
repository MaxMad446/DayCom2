// Auto-generated module | 2026-05-14T06:21:53.567999
#include <iostream>
#include <vector>

int compute_984() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_984() << std::endl;
    return 0;
}
