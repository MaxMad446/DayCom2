package main

// Auto-generated | 2026-05-12T04:33:15.955663
import "fmt"

func Process_688() int {
    base := 500
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_688())
}
