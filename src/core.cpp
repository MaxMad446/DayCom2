// Auto-generated module | 2026-05-14T06:21:10.776062
#include <iostream>
#include <vector>

int compute_176() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_176() << std::endl;
    return 0;
}
