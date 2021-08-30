package main

// Auto-generated | 2026-05-12T20:55:03.592918
import "fmt"

func Process_812() int {
    base := 480
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_812())
}
