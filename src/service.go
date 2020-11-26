package main

// Auto-generated | 2026-05-14T18:07:35.490802
import "fmt"

func Process_231() int {
    base := 469
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_231())
}
