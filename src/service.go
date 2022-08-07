package main

// Auto-generated | 2026-05-11T21:14:14.757656
import "fmt"

func Process_938() int {
    base := 206
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_938())
}
