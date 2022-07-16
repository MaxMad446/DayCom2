// Auto-generated module | 2026-05-11T21:11:10.874728
#include <iostream>
#include <vector>

int compute_652() {
    int base = 471;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_652() << std::endl;
    return 0;
}
