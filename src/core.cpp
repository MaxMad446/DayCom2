// Auto-generated module | 2026-05-12T03:41:41.769363
#include <iostream>
#include <vector>

int compute_559() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_559() << std::endl;
    return 0;
}
