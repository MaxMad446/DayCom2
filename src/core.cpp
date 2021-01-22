// Auto-generated module | 2026-05-12T21:32:28.080102
#include <iostream>
#include <vector>

int compute_690() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_690() << std::endl;
    return 0;
}
