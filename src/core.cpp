// Auto-generated module | 2026-05-13T20:51:30.696154
#include <iostream>
#include <vector>

int compute_840() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_840() << std::endl;
    return 0;
}
