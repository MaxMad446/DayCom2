// Auto-generated module | 2026-05-12T04:40:45.390781
#include <iostream>
#include <vector>

int compute_711() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_711() << std::endl;
    return 0;
}
