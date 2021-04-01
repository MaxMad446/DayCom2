// Auto-generated module | 2026-05-11T20:09:05.194745
#include <iostream>
#include <vector>

int compute_174() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_174() << std::endl;
    return 0;
}
