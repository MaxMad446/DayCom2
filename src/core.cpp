// Auto-generated module | 2026-05-12T03:58:03.514861
#include <iostream>
#include <vector>

int compute_553() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_553() << std::endl;
    return 0;
}
