// Auto-generated module | 2026-05-11T21:30:45.155075
#include <iostream>
#include <vector>

int compute_720() {
    int base = 151;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_720() << std::endl;
    return 0;
}
