package main

// Auto-generated | 2026-05-11T22:15:30.996936
import "fmt"

func Process_575() int {
    base := 302
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_575())
}
