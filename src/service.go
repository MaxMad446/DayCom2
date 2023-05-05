package main

// Auto-generated | 2026-05-13T20:37:21.942374
import "fmt"

func Process_851() int {
    base := 322
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_851())
}
