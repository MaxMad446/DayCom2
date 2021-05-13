// Auto-generated module | 2026-05-12T20:45:47.819846
#include <iostream>
#include <vector>

int compute_171() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_171() << std::endl;
    return 0;
}
