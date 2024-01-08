package main

// Auto-generated | 2026-05-11T22:21:36.762927
import "fmt"

func Process_673() int {
    base := 124
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_673())
}
