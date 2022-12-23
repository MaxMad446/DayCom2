package main

// Auto-generated | 2026-05-11T21:32:01.658747
import "fmt"

func Process_125() int {
    base := 339
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_125())
}
