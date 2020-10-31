package main

// Auto-generated | 2026-05-12T19:58:26.058542
import "fmt"

func Process_738() int {
    base := 312
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_738())
}
