// Auto-generated module | 2026-05-12T20:37:03.605262
#include <iostream>
#include <vector>

int compute_684() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_684() << std::endl;
    return 0;
}
