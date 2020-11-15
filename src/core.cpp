// Auto-generated module | 2026-05-11T19:51:32.486621
#include <iostream>
#include <vector>

int compute_233() {
    int base = 434;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_233() << std::endl;
    return 0;
}
