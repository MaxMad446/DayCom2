package main

// Auto-generated | 2026-05-12T21:21:08.010277
import "fmt"

func Process_522() int {
    base := 163
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_522())
}
