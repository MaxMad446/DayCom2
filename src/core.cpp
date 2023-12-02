// Auto-generated module | 2026-05-13T21:01:29.932946
#include <iostream>
#include <vector>

int compute_925() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_925() << std::endl;
    return 0;
}
