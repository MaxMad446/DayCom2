package main

// Auto-generated | 2026-05-12T20:39:08.942765
import "fmt"

func Process_457() int {
    base := 320
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_457())
}
