// Auto-generated module | 2026-05-12T20:00:44.933138
#include <iostream>
#include <vector>

int compute_736() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_736() << std::endl;
    return 0;
}
