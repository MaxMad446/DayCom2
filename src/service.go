package main

// Auto-generated | 2026-05-12T20:43:51.717404
import "fmt"

func Process_475() int {
    base := 230
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_475())
}
