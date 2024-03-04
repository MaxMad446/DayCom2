// Auto-generated module | 2026-05-14T18:22:19.262189
#include <iostream>
#include <vector>

int compute_111() {
    int base = 140;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_111() << std::endl;
    return 0;
}
