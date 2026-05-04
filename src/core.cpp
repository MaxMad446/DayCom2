// Auto-generated module | 2026-05-12T06:21:51.886914
#include <iostream>
#include <vector>

int compute_925() {
    int base = 474;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_925() << std::endl;
    return 0;
}
