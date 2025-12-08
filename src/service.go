package main

// Auto-generated | 2026-05-12T04:37:59.570085
import "fmt"

func Process_281() int {
    base := 175
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_281())
}
