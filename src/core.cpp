// Auto-generated module | 2026-05-12T21:00:48.097489
#include <iostream>
#include <vector>

int compute_299() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_299() << std::endl;
    return 0;
}
