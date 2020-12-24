package main

// Auto-generated | 2026-05-11T19:56:30.775969
import "fmt"

func Process_595() int {
    base := 127
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_595())
}
