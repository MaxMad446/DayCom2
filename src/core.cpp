// Auto-generated module | 2026-05-12T21:02:21.572245
#include <iostream>
#include <vector>

int compute_615() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_615() << std::endl;
    return 0;
}
