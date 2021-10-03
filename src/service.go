package main

// Auto-generated | 2026-05-11T20:33:08.065909
import "fmt"

func Process_622() int {
    base := 138
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_622())
}
