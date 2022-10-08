// Auto-generated module | 2026-05-14T06:21:40.466594
#include <iostream>
#include <vector>

int compute_586() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_586() << std::endl;
    return 0;
}
