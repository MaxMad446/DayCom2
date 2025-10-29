// Auto-generated module | 2026-05-12T04:32:46.961852
#include <iostream>
#include <vector>

int compute_506() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_506() << std::endl;
    return 0;
}
