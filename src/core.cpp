// Auto-generated module | 2026-05-12T03:39:10.227369
#include <iostream>
#include <vector>

int compute_774() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_774() << std::endl;
    return 0;
}
