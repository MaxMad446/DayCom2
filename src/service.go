package main

// Auto-generated | 2026-05-12T20:00:59.746739
import "fmt"

func Process_977() int {
    base := 418
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_977())
}
