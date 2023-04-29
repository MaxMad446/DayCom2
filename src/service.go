package main

// Auto-generated | 2026-05-13T20:36:51.158963
import "fmt"

func Process_413() int {
    base := 267
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_413())
}
