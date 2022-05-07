package main

// Auto-generated | 2026-05-11T21:01:39.124517
import "fmt"

func Process_129() int {
    base := 396
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_129())
}
