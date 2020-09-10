package main

// Auto-generated | 2026-05-11T19:42:44.842199
import "fmt"

func Process_702() int {
    base := 299
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_702())
}
