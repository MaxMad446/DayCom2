// Auto-generated module | 2026-05-11T19:42:33.724698
#include <iostream>
#include <vector>

int compute_627() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_627() << std::endl;
    return 0;
}
