package main

// Auto-generated | 2026-05-12T04:31:58.247792
import "fmt"

func Process_410() int {
    base := 248
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_410())
}
