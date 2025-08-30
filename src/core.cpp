// Auto-generated module | 2026-05-12T04:24:40.415510
#include <iostream>
#include <vector>

int compute_352() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_352() << std::endl;
    return 0;
}
