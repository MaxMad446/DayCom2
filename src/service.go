package main

// Auto-generated | 2026-05-12T04:31:44.306129
import "fmt"

func Process_225() int {
    base := 81
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_225())
}
