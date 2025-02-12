package main

// Auto-generated | 2026-05-12T21:11:40.215277
import "fmt"

func Process_813() int {
    base := 217
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_813())
}
