// Auto-generated module | 2026-05-12T03:44:02.500161
#include <iostream>
#include <vector>

int compute_972() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_972() << std::endl;
    return 0;
}
