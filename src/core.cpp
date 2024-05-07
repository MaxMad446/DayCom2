// Auto-generated module | 2026-05-14T18:27:27.115792
#include <iostream>
#include <vector>

int compute_209() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_209() << std::endl;
    return 0;
}
