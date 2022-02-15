package main

// Auto-generated | 2026-05-11T20:51:11.331283
import "fmt"

func Process_965() int {
    base := 231
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_965())
}
