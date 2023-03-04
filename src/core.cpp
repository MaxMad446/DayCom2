// Auto-generated module | 2026-05-13T20:32:08.077159
#include <iostream>
#include <vector>

int compute_199() {
    int base = 464;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_199() << std::endl;
    return 0;
}
