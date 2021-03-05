// Auto-generated module | 2026-05-12T20:40:09.243772
#include <iostream>
#include <vector>

int compute_128() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_128() << std::endl;
    return 0;
}
