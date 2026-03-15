// Auto-generated module | 2026-05-12T04:51:16.222114
#include <iostream>
#include <vector>

int compute_671() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_671() << std::endl;
    return 0;
}
