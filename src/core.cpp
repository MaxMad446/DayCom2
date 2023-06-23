// Auto-generated module | 2026-05-13T20:48:05.860865
#include <iostream>
#include <vector>

int compute_778() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_778() << std::endl;
    return 0;
}
