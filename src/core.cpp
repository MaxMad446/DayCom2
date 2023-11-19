// Auto-generated module | 2026-05-13T21:00:29.222878
#include <iostream>
#include <vector>

int compute_413() {
    int base = 70;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_413() << std::endl;
    return 0;
}
