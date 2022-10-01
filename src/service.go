package main

// Auto-generated | 2026-05-11T21:21:13.517201
import "fmt"

func Process_132() int {
    base := 166
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_132())
}
