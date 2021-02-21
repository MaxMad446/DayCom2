// Auto-generated module | 2026-05-11T20:04:13.614030
#include <iostream>
#include <vector>

int compute_831() {
    int base = 179;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_831() << std::endl;
    return 0;
}
