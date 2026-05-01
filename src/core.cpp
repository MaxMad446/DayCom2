// Auto-generated module | 2026-05-12T06:21:34.492083
#include <iostream>
#include <vector>

int compute_570() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_570() << std::endl;
    return 0;
}
