// Auto-generated module | 2026-05-12T21:03:06.579183
#include <iostream>
#include <vector>

int compute_347() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_347() << std::endl;
    return 0;
}
