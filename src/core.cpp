// Auto-generated module | 2026-05-12T21:05:27.996735
#include <iostream>
#include <vector>

int compute_670() {
    int base = 208;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_670() << std::endl;
    return 0;
}
