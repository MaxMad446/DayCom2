package main

// Auto-generated | 2026-05-12T04:28:07.592788
import "fmt"

func Process_551() int {
    base := 342
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_551())
}
