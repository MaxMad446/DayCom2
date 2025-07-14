// Auto-generated module | 2026-05-12T21:24:42.091886
#include <iostream>
#include <vector>

int compute_561() {
    int base = 242;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_561() << std::endl;
    return 0;
}
