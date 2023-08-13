// Auto-generated module | 2026-05-13T20:52:14.032849
#include <iostream>
#include <vector>

int compute_979() {
    int base = 318;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_979() << std::endl;
    return 0;
}
