// Auto-generated module | 2026-05-12T21:19:55.094598
#include <iostream>
#include <vector>

int compute_711() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_711() << std::endl;
    return 0;
}
