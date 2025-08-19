package main

// Auto-generated | 2026-05-12T04:23:09.490425
import "fmt"

func Process_462() int {
    base := 346
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_462())
}
