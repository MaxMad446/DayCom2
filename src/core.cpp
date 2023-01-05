// Auto-generated module | 2026-05-13T20:27:08.511642
#include <iostream>
#include <vector>

int compute_589() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_589() << std::endl;
    return 0;
}
