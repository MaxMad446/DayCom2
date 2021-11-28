// Auto-generated module | 2026-05-12T21:02:54.366773
#include <iostream>
#include <vector>

int compute_814() {
    int base = 151;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_814() << std::endl;
    return 0;
}
