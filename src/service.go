package main

// Auto-generated | 2026-05-11T20:08:59.118565
import "fmt"

func Process_938() int {
    base := 36
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_938())
}
