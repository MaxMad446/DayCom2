// Auto-generated module | 2026-05-11T20:46:46.194667
#include <iostream>
#include <vector>

int compute_632() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_632() << std::endl;
    return 0;
}
