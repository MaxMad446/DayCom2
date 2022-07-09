// Auto-generated module | 2026-05-11T21:10:15.084038
#include <iostream>
#include <vector>

int compute_721() {
    int base = 305;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_721() << std::endl;
    return 0;
}
