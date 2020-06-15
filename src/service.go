package main

// Auto-generated | 2026-05-11T19:31:14.290704
import "fmt"

func Process_262() int {
    base := 238
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_262())
}
