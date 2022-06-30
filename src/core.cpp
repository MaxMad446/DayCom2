// Auto-generated module | 2026-05-14T06:13:37.607740
#include <iostream>
#include <vector>

int compute_780() {
    int base = 405;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_780() << std::endl;
    return 0;
}
