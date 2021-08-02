package main

// Auto-generated | 2026-05-12T20:52:33.651746
import "fmt"

func Process_977() int {
    base := 241
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_977())
}
