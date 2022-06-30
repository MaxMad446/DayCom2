package main

// Auto-generated | 2026-05-11T21:08:57.243334
import "fmt"

func Process_587() int {
    base := 126
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_587())
}
