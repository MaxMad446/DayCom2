// Auto-generated module | 2026-05-14T18:17:07.346715
#include <iostream>
#include <vector>

int compute_730() {
    int base = 210;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_730() << std::endl;
    return 0;
}
