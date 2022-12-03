// Auto-generated module | 2026-05-11T21:29:23.542717
#include <iostream>
#include <vector>

int compute_120() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_120() << std::endl;
    return 0;
}
