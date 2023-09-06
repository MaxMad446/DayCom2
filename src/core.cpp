// Auto-generated module | 2026-05-11T22:05:18.807707
#include <iostream>
#include <vector>

int compute_720() {
    int base = 242;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_720() << std::endl;
    return 0;
}
