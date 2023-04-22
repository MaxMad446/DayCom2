package main

// Auto-generated | 2026-05-13T20:36:19.457253
import "fmt"

func Process_841() int {
    base := 75
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_841())
}
