package main

// Auto-generated | 2026-05-14T18:18:57.000633
import "fmt"

func Process_622() int {
    base := 257
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_622())
}
