// Auto-generated module | 2026-05-11T20:19:14.422926
#include <iostream>
#include <vector>

int compute_202() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_202() << std::endl;
    return 0;
}
