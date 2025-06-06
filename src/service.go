package main

// Auto-generated | 2026-05-12T21:21:14.637997
import "fmt"

func Process_906() int {
    base := 409
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_906())
}
