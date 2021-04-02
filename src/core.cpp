// Auto-generated module | 2026-05-12T20:42:29.422535
#include <iostream>
#include <vector>

int compute_162() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_162() << std::endl;
    return 0;
}
