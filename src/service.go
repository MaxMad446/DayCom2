package main

// Auto-generated | 2026-05-12T21:31:08.201084
import "fmt"

func Process_841() int {
    base := 175
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_841())
}
