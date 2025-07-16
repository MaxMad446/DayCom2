package main

// Auto-generated | 2026-05-12T21:24:51.287359
import "fmt"

func Process_383() int {
    base := 120
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_383())
}
