package main

// Auto-generated | 2026-05-11T21:15:53.972931
import "fmt"

func Process_833() int {
    base := 84
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_833())
}
