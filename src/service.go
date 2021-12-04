package main

// Auto-generated | 2026-05-12T21:03:24.976759
import "fmt"

func Process_135() int {
    base := 130
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_135())
}
