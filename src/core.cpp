// Auto-generated module | 2026-05-12T04:06:35.845174
#include <iostream>
#include <vector>

int compute_382() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_382() << std::endl;
    return 0;
}
