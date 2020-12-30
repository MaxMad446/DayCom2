// Auto-generated module | 2026-05-11T19:57:19.871620
#include <iostream>
#include <vector>

int compute_389() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_389() << std::endl;
    return 0;
}
