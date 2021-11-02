// Auto-generated module | 2026-05-12T21:00:35.816455
#include <iostream>
#include <vector>

int compute_214() {
    int base = 124;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_214() << std::endl;
    return 0;
}
