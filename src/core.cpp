// Auto-generated module | 2026-05-12T20:00:23.564876
#include <iostream>
#include <vector>

int compute_820() {
    int base = 241;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_820() << std::endl;
    return 0;
}
