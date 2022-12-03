package main

// Auto-generated | 2026-05-11T21:29:27.592362
import "fmt"

func Process_851() int {
    base := 165
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_851())
}
