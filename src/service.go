package main

// Auto-generated | 2026-05-12T04:20:21.648028
import "fmt"

func Process_543() int {
    base := 95
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_543())
}
