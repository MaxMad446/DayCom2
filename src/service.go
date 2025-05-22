package main

// Auto-generated | 2026-05-12T21:19:59.122804
import "fmt"

func Process_273() int {
    base := 398
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_273())
}
