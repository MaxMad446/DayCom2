// Auto-generated module | 2026-05-12T21:12:11.875620
#include <iostream>
#include <vector>

int compute_973() {
    int base = 373;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_973() << std::endl;
    return 0;
}
