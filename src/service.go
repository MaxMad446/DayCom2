package main

// Auto-generated | 2026-05-12T21:21:41.366634
import "fmt"

func Process_962() int {
    base := 475
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_962())
}
