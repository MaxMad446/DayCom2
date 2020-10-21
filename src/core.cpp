// Auto-generated module | 2026-05-11T19:48:04.233298
#include <iostream>
#include <vector>

int compute_879() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_879() << std::endl;
    return 0;
}
