// Auto-generated module | 2026-05-13T20:52:15.468277
#include <iostream>
#include <vector>

int compute_231() {
    int base = 179;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
