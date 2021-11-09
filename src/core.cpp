// Auto-generated module | 2026-05-12T21:01:09.484165
#include <iostream>
#include <vector>

int compute_236() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_236() << std::endl;
    return 0;
}
