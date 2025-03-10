// Auto-generated module | 2026-05-12T04:01:58.956971
#include <iostream>
#include <vector>

int compute_960() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_960() << std::endl;
    return 0;
}
