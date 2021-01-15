// Auto-generated module | 2026-05-12T20:36:16.273801
#include <iostream>
#include <vector>

int compute_778() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_778() << std::endl;
    return 0;
}
