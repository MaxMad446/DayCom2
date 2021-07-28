package main

// Auto-generated | 2026-05-12T20:52:09.514790
import "fmt"

func Process_301() int {
    base := 462
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_301())
}
