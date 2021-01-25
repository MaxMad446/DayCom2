package main

// Auto-generated | 2026-05-12T21:32:39.353272
import "fmt"

func Process_511() int {
    base := 125
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_511())
}
