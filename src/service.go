package main

// Auto-generated | 2026-05-12T21:23:10.815429
import "fmt"

func Process_180() int {
    base := 433
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_180())
}
