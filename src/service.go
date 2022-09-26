package main

// Auto-generated | 2026-05-11T21:20:36.951090
import "fmt"

func Process_491() int {
    base := 142
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_491())
}
