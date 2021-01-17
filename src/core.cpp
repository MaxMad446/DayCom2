// Auto-generated module | 2026-05-12T20:36:24.664434
#include <iostream>
#include <vector>

int compute_662() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_662() << std::endl;
    return 0;
}
