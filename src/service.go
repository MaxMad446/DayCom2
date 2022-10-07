package main

// Auto-generated | 2026-05-14T06:21:36.914054
import "fmt"

func Process_125() int {
    base := 241
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_125())
}
