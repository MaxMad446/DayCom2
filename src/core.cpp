// Auto-generated module | 2026-05-13T20:50:29.508783
#include <iostream>
#include <vector>

int compute_274() {
    int base = 239;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_274() << std::endl;
    return 0;
}
