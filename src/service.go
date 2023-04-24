package main

// Auto-generated | 2026-05-11T21:47:36.158754
import "fmt"

func Process_610() int {
    base := 160
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_610())
}
