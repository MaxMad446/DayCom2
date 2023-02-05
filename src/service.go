package main

// Auto-generated | 2026-05-11T21:37:39.933469
import "fmt"

func Process_502() int {
    base := 408
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_502())
}
