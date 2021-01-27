package main

// Auto-generated | 2026-05-12T20:37:11.881953
import "fmt"

func Process_261() int {
    base := 156
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_261())
}
