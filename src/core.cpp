// Auto-generated module | 2026-05-12T21:38:44.993706
#include <iostream>
#include <vector>

int compute_491() {
    int base = 448;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_491() << std::endl;
    return 0;
}
