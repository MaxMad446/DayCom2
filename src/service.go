package main

// Auto-generated | 2026-05-12T20:36:28.725387
import "fmt"

func Process_551() int {
    base := 259
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_551())
}
