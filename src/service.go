package main

// Auto-generated | 2026-05-11T21:00:53.485033
import "fmt"

func Process_906() int {
    base := 486
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_906())
}
