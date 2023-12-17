// Auto-generated module | 2026-05-13T21:02:42.139819
#include <iostream>
#include <vector>

int compute_840() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_840() << std::endl;
    return 0;
}
