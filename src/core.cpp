// Auto-generated module | 2026-05-12T03:40:35.321984
#include <iostream>
#include <vector>

int compute_608() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_608() << std::endl;
    return 0;
}
