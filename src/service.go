package main

// Auto-generated | 2026-05-11T20:22:44.185538
import "fmt"

func Process_795() int {
    base := 438
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_795())
}
