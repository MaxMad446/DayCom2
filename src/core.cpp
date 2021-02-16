// Auto-generated module | 2026-05-12T21:34:28.292216
#include <iostream>
#include <vector>

int compute_824() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_824() << std::endl;
    return 0;
}
