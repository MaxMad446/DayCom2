// Auto-generated module | 2026-05-12T03:52:03.374263
#include <iostream>
#include <vector>

int compute_637() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_637() << std::endl;
    return 0;
}
