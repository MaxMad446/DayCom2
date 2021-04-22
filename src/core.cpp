// Auto-generated module | 2026-05-12T21:40:01.567178
#include <iostream>
#include <vector>

int compute_720() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_720() << std::endl;
    return 0;
}
