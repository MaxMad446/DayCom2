package main

// Auto-generated | 2026-05-11T21:56:41.645627
import "fmt"

func Process_783() int {
    base := 427
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_783())
}
