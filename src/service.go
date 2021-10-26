package main

// Auto-generated | 2026-05-12T20:59:55.419588
import "fmt"

func Process_610() int {
    base := 320
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_610())
}
