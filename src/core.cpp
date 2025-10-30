// Auto-generated module | 2026-05-12T04:32:58.325525
#include <iostream>
#include <vector>

int compute_174() {
    int base = 345;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_174() << std::endl;
    return 0;
}
