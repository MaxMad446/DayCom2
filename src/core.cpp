// Auto-generated module | 2026-05-11T20:13:16.437768
#include <iostream>
#include <vector>

int compute_733() {
    int base = 418;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_733() << std::endl;
    return 0;
}
