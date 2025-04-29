// Auto-generated module | 2026-05-12T21:17:58.318521
#include <iostream>
#include <vector>

int compute_710() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_710() << std::endl;
    return 0;
}
