// Auto-generated module | 2026-05-14T18:17:40.448956
#include <iostream>
#include <vector>

int compute_945() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_945() << std::endl;
    return 0;
}
