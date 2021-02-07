package main

// Auto-generated | 2026-05-11T20:02:17.212678
import "fmt"

func Process_309() int {
    base := 225
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_309())
}
