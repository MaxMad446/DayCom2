// Auto-generated module | 2026-05-11T22:19:54.811275
#include <iostream>
#include <vector>

int compute_182() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_182() << std::endl;
    return 0;
}
