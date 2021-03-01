// Auto-generated module | 2026-05-12T21:35:30.878448
#include <iostream>
#include <vector>

int compute_326() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_326() << std::endl;
    return 0;
}
