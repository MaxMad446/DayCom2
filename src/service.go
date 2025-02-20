package main

// Auto-generated | 2026-05-12T21:12:23.664180
import "fmt"

func Process_454() int {
    base := 25
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_454())
}
