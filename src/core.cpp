// Auto-generated module | 2026-05-12T20:39:55.058829
#include <iostream>
#include <vector>

int compute_840() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_840() << std::endl;
    return 0;
}
