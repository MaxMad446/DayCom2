package main

// Auto-generated | 2026-05-12T20:00:14.960187
import "fmt"

func Process_791() int {
    base := 390
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_791())
}
