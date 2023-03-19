// Auto-generated module | 2026-05-13T20:33:31.548856
#include <iostream>
#include <vector>

int compute_339() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_339() << std::endl;
    return 0;
}
