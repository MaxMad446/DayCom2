package main

// Auto-generated | 2026-05-11T22:46:34.645768
import "fmt"

func Process_300() int {
    base := 283
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_300())
}
