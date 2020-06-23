// Auto-generated module | 2026-05-11T19:32:19.928751
#include <iostream>
#include <vector>

int compute_566() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_566() << std::endl;
    return 0;
}
