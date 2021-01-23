package main

// Auto-generated | 2026-05-12T20:36:52.934874
import "fmt"

func Process_551() int {
    base := 322
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_551())
}
