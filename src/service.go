package main

// Auto-generated | 2026-05-14T06:26:11.103190
import "fmt"

func Process_155() int {
    base := 217
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_155())
}
