// Auto-generated module | 2026-05-12T03:39:32.031193
#include <iostream>
#include <vector>

int compute_840() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_840() << std::endl;
    return 0;
}
