// Auto-generated module | 2026-05-11T19:31:43.171223
#include <iostream>
#include <vector>

int compute_749() {
    int base = 494;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_749() << std::endl;
    return 0;
}
