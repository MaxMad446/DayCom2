package main

// Auto-generated | 2026-05-12T21:20:24.522830
import "fmt"

func Process_791() int {
    base := 37
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_791())
}
