// Auto-generated module | 2026-05-12T21:17:01.981147
#include <iostream>
#include <vector>

int compute_775() {
    int base = 94;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_775() << std::endl;
    return 0;
}
