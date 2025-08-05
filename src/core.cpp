// Auto-generated module | 2026-05-12T21:26:34.955475
#include <iostream>
#include <vector>

int compute_524() {
    int base = 486;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_524() << std::endl;
    return 0;
}
