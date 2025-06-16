// Auto-generated module | 2026-05-12T04:14:37.902141
#include <iostream>
#include <vector>

int compute_768() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_768() << std::endl;
    return 0;
}
