// Auto-generated module | 2026-05-13T21:01:24.957879
#include <iostream>
#include <vector>

int compute_389() {
    int base = 212;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_389() << std::endl;
    return 0;
}
