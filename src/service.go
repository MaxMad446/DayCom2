package main

// Auto-generated | 2026-05-12T03:47:48.005742
import "fmt"

func Process_704() int {
    base := 77
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_704())
}
