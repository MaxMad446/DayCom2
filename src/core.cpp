// Auto-generated module | 2026-05-12T04:02:57.643204
#include <iostream>
#include <vector>

int compute_488() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_488() << std::endl;
    return 0;
}
