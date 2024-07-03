// Auto-generated module | 2026-05-11T22:44:45.816582
#include <iostream>
#include <vector>

int compute_259() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_259() << std::endl;
    return 0;
}
