// Auto-generated module | 2026-05-11T20:32:02.684743
#include <iostream>
#include <vector>

int compute_214() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_214() << std::endl;
    return 0;
}
