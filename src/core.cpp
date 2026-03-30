// Auto-generated module | 2026-05-12T06:17:06.826618
#include <iostream>
#include <vector>

int compute_238() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_238() << std::endl;
    return 0;
}
