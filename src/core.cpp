// Auto-generated module | 2026-05-11T19:50:11.830181
#include <iostream>
#include <vector>

int compute_652() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_652() << std::endl;
    return 0;
}
