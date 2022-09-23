// Auto-generated module | 2026-05-11T21:20:13.816870
#include <iostream>
#include <vector>

int compute_878() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_878() << std::endl;
    return 0;
}
