// Auto-generated module | 2026-05-11T21:29:17.601394
#include <iostream>
#include <vector>

int compute_981() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_981() << std::endl;
    return 0;
}
