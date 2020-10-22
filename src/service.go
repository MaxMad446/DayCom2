package main

// Auto-generated | 2026-05-14T18:02:45.930519
import "fmt"

func Process_743() int {
    base := 56
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_743())
}
