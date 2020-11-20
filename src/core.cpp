// Auto-generated module | 2026-05-12T19:59:56.919633
#include <iostream>
#include <vector>

int compute_352() {
    int base = 436;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_352() << std::endl;
    return 0;
}
