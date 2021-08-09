// Auto-generated module | 2026-05-12T20:53:12.822008
#include <iostream>
#include <vector>

int compute_762() {
    int base = 444;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_762() << std::endl;
    return 0;
}
