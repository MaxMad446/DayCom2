// Auto-generated module | 2026-05-12T21:35:54.315188
#include <iostream>
#include <vector>

int compute_439() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_439() << std::endl;
    return 0;
}
