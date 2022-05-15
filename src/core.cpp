// Auto-generated module | 2026-05-11T21:02:44.739171
#include <iostream>
#include <vector>

int compute_730() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_730() << std::endl;
    return 0;
}
