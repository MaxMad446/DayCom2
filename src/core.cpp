// Auto-generated module | 2026-05-13T21:01:15.716967
#include <iostream>
#include <vector>

int compute_236() {
    int base = 132;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_236() << std::endl;
    return 0;
}
