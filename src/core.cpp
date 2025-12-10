// Auto-generated module | 2026-05-12T04:38:17.041808
#include <iostream>
#include <vector>

int compute_199() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_199() << std::endl;
    return 0;
}
