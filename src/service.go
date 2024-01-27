package main

// Auto-generated | 2026-05-11T22:24:03.991543
import "fmt"

func Process_878() int {
    base := 15
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_878())
}
