package main

// Auto-generated | 2026-05-12T04:28:39.941825
import "fmt"

func Process_168() int {
    base := 79
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_168())
}
