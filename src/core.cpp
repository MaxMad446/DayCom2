// Auto-generated module | 2026-05-12T04:45:14.800993
#include <iostream>
#include <vector>

int compute_408() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_408() << std::endl;
    return 0;
}
