// Auto-generated module | 2026-05-14T18:27:00.236468
#include <iostream>
#include <vector>

int compute_289() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_289() << std::endl;
    return 0;
}
