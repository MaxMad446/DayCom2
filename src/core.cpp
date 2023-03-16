// Auto-generated module | 2026-05-11T21:42:36.639678
#include <iostream>
#include <vector>

int compute_244() {
    int base = 179;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_244() << std::endl;
    return 0;
}
