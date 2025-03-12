// Auto-generated module | 2026-05-12T21:13:59.124050
#include <iostream>
#include <vector>

int compute_199() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_199() << std::endl;
    return 0;
}
