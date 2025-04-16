// Auto-generated module | 2026-05-12T21:16:54.974554
#include <iostream>
#include <vector>

int compute_722() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_722() << std::endl;
    return 0;
}
