// Auto-generated module | 2026-05-12T21:27:13.607971
#include <iostream>
#include <vector>

int compute_601() {
    int base = 69;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_601() << std::endl;
    return 0;
}
