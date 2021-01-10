// Auto-generated module | 2026-05-12T21:31:37.736856
#include <iostream>
#include <vector>

int compute_267() {
    int base = 451;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_267() << std::endl;
    return 0;
}
