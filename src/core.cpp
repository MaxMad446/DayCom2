// Auto-generated module | 2026-05-13T20:27:07.735061
#include <iostream>
#include <vector>

int compute_282() {
    int base = 340;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_282() << std::endl;
    return 0;
}
