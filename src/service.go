package main

// Auto-generated | 2026-05-12T20:43:38.184103
import "fmt"

func Process_284() int {
    base := 251
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_284())
}
