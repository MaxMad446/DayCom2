package main

// Auto-generated | 2026-05-12T21:12:26.185254
import "fmt"

func Process_807() int {
    base := 387
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_807())
}
