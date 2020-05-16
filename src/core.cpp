// Auto-generated module | 2026-05-11T19:27:16.783253
#include <iostream>
#include <vector>

int compute_788() {
    int base = 216;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_788() << std::endl;
    return 0;
}
