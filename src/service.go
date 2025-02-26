package main

// Auto-generated | 2026-05-12T04:00:27.814602
import "fmt"

func Process_412() int {
    base := 284
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_412())
}
