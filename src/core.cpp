// Auto-generated module | 2026-05-12T03:38:58.656448
#include <iostream>
#include <vector>

int compute_657() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_657() << std::endl;
    return 0;
}
