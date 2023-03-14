package main

// Auto-generated | 2026-05-11T21:42:26.792259
import "fmt"

func Process_905() int {
    base := 350
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_905())
}
