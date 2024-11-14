// Auto-generated module | 2026-05-12T03:46:37.304872
#include <iostream>
#include <vector>

int compute_467() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_467() << std::endl;
    return 0;
}
