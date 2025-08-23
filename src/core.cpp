// Auto-generated module | 2026-05-12T21:28:10.527639
#include <iostream>
#include <vector>

int compute_920() {
    int base = 474;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_920() << std::endl;
    return 0;
}
