package main

// Auto-generated | 2026-05-11T22:47:54.082004
import "fmt"

func Process_330() int {
    base := 316
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_330())
}
