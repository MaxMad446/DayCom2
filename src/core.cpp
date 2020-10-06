// Auto-generated module | 2026-05-11T19:46:10.592551
#include <iostream>
#include <vector>

int compute_679() {
    int base = 239;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_679() << std::endl;
    return 0;
}
