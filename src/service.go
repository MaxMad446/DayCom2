package main

// Auto-generated | 2026-05-14T06:25:34.157879
import "fmt"

func Process_221() int {
    base := 168
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_221())
}
