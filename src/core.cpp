// Auto-generated module | 2026-05-11T20:01:05.024945
#include <iostream>
#include <vector>

int compute_440() {
    int base = 215;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_440() << std::endl;
    return 0;
}
