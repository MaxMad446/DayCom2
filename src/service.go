package main

// Auto-generated | 2026-05-12T21:23:20.494152
import "fmt"

func Process_486() int {
    base := 391
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_486())
}
