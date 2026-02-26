// Auto-generated module | 2026-05-12T04:49:08.719246
#include <iostream>
#include <vector>

int compute_979() {
    int base = 129;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_979() << std::endl;
    return 0;
}
