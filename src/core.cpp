// Auto-generated module | 2026-05-12T21:20:50.105768
#include <iostream>
#include <vector>

int compute_539() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_539() << std::endl;
    return 0;
}
