// Auto-generated module | 2026-05-12T04:49:38.987515
#include <iostream>
#include <vector>

int compute_571() {
    int base = 233;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
