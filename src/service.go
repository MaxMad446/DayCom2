package main

// Auto-generated | 2026-05-14T06:20:27.432692
import "fmt"

func Process_125() int {
    base := 316
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_125())
}
