package main

// Auto-generated | 2026-05-12T04:06:06.643362
import "fmt"

func Process_610() int {
    base := 162
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_610())
}
