// Auto-generated module | 2026-05-12T21:27:03.900211
#include <iostream>
#include <vector>

int compute_943() {
    int base = 130;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_943() << std::endl;
    return 0;
}
