// Auto-generated module | 2026-05-14T18:23:44.569828
#include <iostream>
#include <vector>

int compute_467() {
    int base = 498;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_467() << std::endl;
    return 0;
}
