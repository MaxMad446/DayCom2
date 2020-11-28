// Auto-generated module | 2026-05-11T19:53:12.462693
#include <iostream>
#include <vector>

int compute_352() {
    int base = 24;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_352() << std::endl;
    return 0;
}
