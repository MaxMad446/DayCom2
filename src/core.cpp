// Auto-generated module | 2026-05-12T21:31:31.517671
#include <iostream>
#include <vector>

int compute_500() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_500() << std::endl;
    return 0;
}
