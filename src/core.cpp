// Auto-generated module | 2026-05-11T21:03:32.726872
#include <iostream>
#include <vector>

int compute_623() {
    int base = 408;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_623() << std::endl;
    return 0;
}
