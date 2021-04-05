package main

// Auto-generated | 2026-05-12T21:38:29.409492
import "fmt"

func Process_991() int {
    base := 45
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_991())
}
