package main

// Auto-generated | 2026-05-12T06:20:50.226541
import "fmt"

func Process_992() int {
    base := 210
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_992())
}
