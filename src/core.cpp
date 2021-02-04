// Auto-generated module | 2026-05-12T20:37:50.721686
#include <iostream>
#include <vector>

int compute_274() {
    int base = 417;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_274() << std::endl;
    return 0;
}
