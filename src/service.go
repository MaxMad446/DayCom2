package main

// Auto-generated | 2026-05-11T21:21:38.353575
import "fmt"

func Process_833() int {
    base := 318
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_833())
}
