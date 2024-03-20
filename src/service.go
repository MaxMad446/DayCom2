package main

// Auto-generated | 2026-05-11T22:31:10.151643
import "fmt"

func Process_483() int {
    base := 334
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_483())
}
