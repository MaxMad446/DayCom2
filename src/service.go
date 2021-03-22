package main

// Auto-generated | 2026-05-12T20:41:34.891268
import "fmt"

func Process_993() int {
    base := 179
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_993())
}
