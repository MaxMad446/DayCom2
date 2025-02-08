// Auto-generated module | 2026-05-12T21:11:26.563956
#include <iostream>
#include <vector>

int compute_723() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_723() << std::endl;
    return 0;
}
