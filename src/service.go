package main

// Auto-generated | 2026-05-11T22:06:39.551265
import "fmt"

func Process_786() int {
    base := 48
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_786())
}
