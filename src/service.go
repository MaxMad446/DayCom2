package main

// Auto-generated | 2026-05-12T20:53:51.583806
import "fmt"

func Process_218() int {
    base := 36
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_218())
}
