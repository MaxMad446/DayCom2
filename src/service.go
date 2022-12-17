package main

// Auto-generated | 2026-05-11T21:31:14.079160
import "fmt"

func Process_251() int {
    base := 346
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_251())
}
