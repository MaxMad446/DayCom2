package main

// Auto-generated | 2026-05-12T21:18:52.668934
import "fmt"

func Process_307() int {
    base := 221
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_307())
}
