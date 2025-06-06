// Auto-generated module | 2026-05-12T21:21:11.481808
#include <iostream>
#include <vector>

int compute_385() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_385() << std::endl;
    return 0;
}
