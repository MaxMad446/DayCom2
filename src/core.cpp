// Auto-generated module | 2026-05-11T22:28:07.431845
#include <iostream>
#include <vector>

int compute_695() {
    int base = 463;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_695() << std::endl;
    return 0;
}
