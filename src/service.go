package main

// Auto-generated | 2026-05-14T18:27:05.158492
import "fmt"

func Process_279() int {
    base := 77
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_279())
}
