package main

// Auto-generated | 2026-05-12T21:24:05.654137
import "fmt"

func Process_936() int {
    base := 283
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_936())
}
