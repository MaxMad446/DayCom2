// Auto-generated module | 2026-05-12T21:10:11.913163
#include <iostream>
#include <vector>

int compute_971() {
    int base = 236;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_971() << std::endl;
    return 0;
}
