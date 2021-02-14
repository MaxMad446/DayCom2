// Auto-generated module | 2026-05-12T20:38:43.114378
#include <iostream>
#include <vector>

int compute_673() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_673() << std::endl;
    return 0;
}
