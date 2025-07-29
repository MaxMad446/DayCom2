package main

// Auto-generated | 2026-05-12T21:25:52.699098
import "fmt"

func Process_867() int {
    base := 36
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_867())
}
