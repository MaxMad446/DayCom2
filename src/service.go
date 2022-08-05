package main

// Auto-generated | 2026-05-14T06:16:27.711004
import "fmt"

func Process_418() int {
    base := 318
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_418())
}
