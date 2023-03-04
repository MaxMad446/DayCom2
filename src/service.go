package main

// Auto-generated | 2026-05-11T21:41:06.051293
import "fmt"

func Process_813() int {
    base := 397
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_813())
}
