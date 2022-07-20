package main

// Auto-generated | 2026-05-11T21:11:39.115724
import "fmt"

func Process_203() int {
    base := 426
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_203())
}
