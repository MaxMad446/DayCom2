package main

// Auto-generated | 2026-05-12T21:12:42.865658
import "fmt"

func Process_533() int {
    base := 454
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_533())
}
