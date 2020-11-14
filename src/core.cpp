// Auto-generated module | 2026-05-11T19:51:18.030513
#include <iostream>
#include <vector>

int compute_661() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_661() << std::endl;
    return 0;
}
