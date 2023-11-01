// Auto-generated module | 2026-05-13T20:58:55.032260
#include <iostream>
#include <vector>

int compute_424() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_424() << std::endl;
    return 0;
}
