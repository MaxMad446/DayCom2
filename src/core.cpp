// Auto-generated module | 2026-05-13T20:29:26.750101
#include <iostream>
#include <vector>

int compute_293() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_293() << std::endl;
    return 0;
}
