// Auto-generated module | 2026-05-12T04:24:16.744005
#include <iostream>
#include <vector>

int compute_911() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_911() << std::endl;
    return 0;
}
