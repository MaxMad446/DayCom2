// Auto-generated module | 2026-05-12T20:37:56.520077
#include <iostream>
#include <vector>

int compute_856() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_856() << std::endl;
    return 0;
}
