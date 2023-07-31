package main

// Auto-generated | 2026-05-13T20:51:13.241117
import "fmt"

func Process_130() int {
    base := 73
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_130())
}
