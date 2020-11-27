// Auto-generated module | 2026-05-12T20:00:33.092559
#include <iostream>
#include <vector>

int compute_246() {
    int base = 103;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_246() << std::endl;
    return 0;
}
