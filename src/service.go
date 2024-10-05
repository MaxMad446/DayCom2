package main

// Auto-generated | 2026-05-12T03:41:30.120137
import "fmt"

func Process_262() int {
    base := 19
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_262())
}
