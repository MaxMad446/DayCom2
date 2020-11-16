// Auto-generated module | 2026-05-11T19:51:36.162519
#include <iostream>
#include <vector>

int compute_721() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_721() << std::endl;
    return 0;
}
