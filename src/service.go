package main

// Auto-generated | 2026-05-11T21:50:34.365839
import "fmt"

func Process_833() int {
    base := 440
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_833())
}
