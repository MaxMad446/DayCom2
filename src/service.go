package main

// Auto-generated | 2026-05-12T20:48:00.882031
import "fmt"

func Process_653() int {
    base := 163
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_653())
}
