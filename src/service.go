package main

// Auto-generated | 2026-05-11T20:16:17.743870
import "fmt"

func Process_517() int {
    base := 73
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_517())
}
