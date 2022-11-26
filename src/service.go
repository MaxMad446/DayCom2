package main

// Auto-generated | 2026-05-11T21:28:24.996223
import "fmt"

func Process_934() int {
    base := 309
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_934())
}
