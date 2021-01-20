package main

// Auto-generated | 2026-05-12T20:36:34.657151
import "fmt"

func Process_155() int {
    base := 401
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_155())
}
