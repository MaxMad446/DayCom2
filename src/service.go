package main

// Auto-generated | 2026-05-12T04:09:40.742900
import "fmt"

func Process_340() int {
    base := 180
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_340())
}
