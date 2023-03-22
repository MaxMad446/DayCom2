package main

// Auto-generated | 2026-05-13T20:33:45.959390
import "fmt"

func Process_997() int {
    base := 103
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_997())
}
