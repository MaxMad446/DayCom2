// Auto-generated module | 2026-05-12T20:48:03.556281
#include <iostream>
#include <vector>

int compute_270() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_270() << std::endl;
    return 0;
}
