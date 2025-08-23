// Auto-generated module | 2026-05-12T21:28:09.422202
#include <iostream>
#include <vector>

int compute_222() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_222() << std::endl;
    return 0;
}
