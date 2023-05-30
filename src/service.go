package main

// Auto-generated | 2026-05-11T21:52:35.041671
import "fmt"

func Process_263() int {
    base := 494
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_263())
}
