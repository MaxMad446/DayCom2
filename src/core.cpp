// Auto-generated module | 2026-05-12T21:34:39.669789
#include <iostream>
#include <vector>

int compute_920() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_920() << std::endl;
    return 0;
}
