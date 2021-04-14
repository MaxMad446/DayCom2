package main

// Auto-generated | 2026-05-12T21:39:17.730752
import "fmt"

func Process_224() int {
    base := 247
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_224())
}
