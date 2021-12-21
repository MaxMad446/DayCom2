// Auto-generated module | 2026-05-12T21:04:45.260936
#include <iostream>
#include <vector>

int compute_751() {
    int base = 81;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_751() << std::endl;
    return 0;
}
