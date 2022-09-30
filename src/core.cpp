// Auto-generated module | 2026-05-11T21:21:07.921255
#include <iostream>
#include <vector>

int compute_237() {
    int base = 486;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_237() << std::endl;
    return 0;
}
