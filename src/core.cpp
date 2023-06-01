// Auto-generated module | 2026-05-13T20:46:17.852896
#include <iostream>
#include <vector>

int compute_848() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_848() << std::endl;
    return 0;
}
