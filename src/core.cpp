// Auto-generated module | 2026-05-11T22:16:08.126287
#include <iostream>
#include <vector>

int compute_977() {
    int base = 70;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_977() << std::endl;
    return 0;
}
