// Auto-generated module | 2026-05-13T20:48:03.437356
#include <iostream>
#include <vector>

int compute_231() {
    int base = 373;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
