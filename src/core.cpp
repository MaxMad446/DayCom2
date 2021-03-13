// Auto-generated module | 2026-05-12T21:36:27.702554
#include <iostream>
#include <vector>

int compute_589() {
    int base = 362;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_589() << std::endl;
    return 0;
}
