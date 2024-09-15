// Auto-generated module | 2026-05-12T03:38:57.559574
#include <iostream>
#include <vector>

int compute_236() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_236() << std::endl;
    return 0;
}
