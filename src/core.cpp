// Auto-generated module | 2026-05-13T20:29:28.878609
#include <iostream>
#include <vector>

int compute_733() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_733() << std::endl;
    return 0;
}
