// Auto-generated module | 2026-05-11T20:48:16.820630
#include <iostream>
#include <vector>

int compute_718() {
    int base = 274;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_718() << std::endl;
    return 0;
}
