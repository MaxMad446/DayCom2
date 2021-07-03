package main

// Auto-generated | 2026-05-11T20:21:18.310807
import "fmt"

func Process_189() int {
    base := 214
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_189())
}
