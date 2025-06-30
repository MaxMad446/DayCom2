// Auto-generated module | 2026-05-12T04:16:30.172319
#include <iostream>
#include <vector>

int compute_371() {
    int base = 122;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_371() << std::endl;
    return 0;
}
