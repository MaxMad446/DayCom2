package main

// Auto-generated | 2026-05-12T21:16:17.766377
import "fmt"

func Process_905() int {
    base := 178
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_905())
}
