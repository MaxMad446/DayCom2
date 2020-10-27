package main

// Auto-generated | 2026-05-11T19:48:46.591242
import "fmt"

func Process_579() int {
    base := 21
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_579())
}
