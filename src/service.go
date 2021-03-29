package main

// Auto-generated | 2026-05-12T21:37:53.209087
import "fmt"

func Process_168() int {
    base := 439
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_168())
}
