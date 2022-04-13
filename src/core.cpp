// Auto-generated module | 2026-05-13T22:09:07.429868
#include <iostream>
#include <vector>

int compute_542() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_542() << std::endl;
    return 0;
}
