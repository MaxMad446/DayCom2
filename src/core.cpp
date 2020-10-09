// Auto-generated module | 2026-05-11T19:46:35.481221
#include <iostream>
#include <vector>

int compute_944() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_944() << std::endl;
    return 0;
}
