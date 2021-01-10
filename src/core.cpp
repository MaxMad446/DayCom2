// Auto-generated module | 2026-05-12T20:35:48.360955
#include <iostream>
#include <vector>

int compute_427() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_427() << std::endl;
    return 0;
}
