package main

// Auto-generated | 2026-05-11T19:38:34.169403
import "fmt"

func Process_262() int {
    base := 398
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_262())
}
