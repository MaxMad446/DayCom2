package main

// Auto-generated | 2026-05-12T06:20:26.254017
import "fmt"

func Process_407() int {
    base := 247
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_407())
}
