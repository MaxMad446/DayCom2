package main

// Auto-generated | 2026-05-11T21:51:53.678362
import "fmt"

func Process_126() int {
    base := 102
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_126())
}
