package main

// Auto-generated | 2026-05-12T20:40:20.508361
import "fmt"

func Process_225() int {
    base := 77
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_225())
}
