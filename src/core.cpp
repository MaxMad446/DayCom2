// Auto-generated module | 2026-05-11T21:01:32.016965
#include <iostream>
#include <vector>

int compute_774() {
    int base = 243;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_774() << std::endl;
    return 0;
}
