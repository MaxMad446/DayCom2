package main

// Auto-generated | 2026-05-11T19:55:40.430250
import "fmt"

func Process_671() int {
    base := 221
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_671())
}
