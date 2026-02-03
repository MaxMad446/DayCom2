// Auto-generated module | 2026-05-12T04:45:49.262146
#include <iostream>
#include <vector>

int compute_774() {
    int base = 148;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_774() << std::endl;
    return 0;
}
