// Auto-generated module | 2026-05-11T21:04:13.587620
#include <iostream>
#include <vector>

int compute_909() {
    int base = 489;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_909() << std::endl;
    return 0;
}
