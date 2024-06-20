// Auto-generated module | 2026-05-11T22:43:02.831547
#include <iostream>
#include <vector>

int compute_999() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_999() << std::endl;
    return 0;
}
