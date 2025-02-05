// Auto-generated module | 2026-05-12T03:57:33.439809
#include <iostream>
#include <vector>

int compute_878() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_878() << std::endl;
    return 0;
}
