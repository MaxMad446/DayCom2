package main

// Auto-generated | 2026-05-11T22:18:50.767230
import "fmt"

func Process_548() int {
    base := 58
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_548())
}
