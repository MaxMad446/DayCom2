// Auto-generated module | 2026-05-11T19:58:40.222654
#include <iostream>
#include <vector>

int compute_879() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_879() << std::endl;
    return 0;
}
