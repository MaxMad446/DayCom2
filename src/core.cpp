// Auto-generated module | 2026-05-12T03:51:04.493895
#include <iostream>
#include <vector>

int compute_604() {
    int base = 401;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_604() << std::endl;
    return 0;
}
