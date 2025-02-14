package main

// Auto-generated | 2026-05-12T21:11:54.131071
import "fmt"

func Process_125() int {
    base := 229
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_125())
}
