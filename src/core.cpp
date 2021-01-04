// Auto-generated module | 2026-05-11T19:57:58.726235
#include <iostream>
#include <vector>

int compute_376() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_376() << std::endl;
    return 0;
}
