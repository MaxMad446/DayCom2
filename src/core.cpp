// Auto-generated module | 2026-05-12T21:15:17.285443
#include <iostream>
#include <vector>

int compute_659() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_659() << std::endl;
    return 0;
}
