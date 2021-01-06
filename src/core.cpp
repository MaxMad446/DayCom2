// Auto-generated module | 2026-05-11T19:58:14.263578
#include <iostream>
#include <vector>

int compute_244() {
    int base = 122;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_244() << std::endl;
    return 0;
}
