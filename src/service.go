package main

// Auto-generated | 2026-05-11T21:07:27.743258
import "fmt"

func Process_271() int {
    base := 282
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_271())
}
