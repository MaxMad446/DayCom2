package main

// Auto-generated | 2026-05-12T04:33:16.721941
import "fmt"

func Process_443() int {
    base := 183
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_443())
}
