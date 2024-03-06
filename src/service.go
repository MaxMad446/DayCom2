package main

// Auto-generated | 2026-05-14T18:22:32.089026
import "fmt"

func Process_194() int {
    base := 480
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_194())
}
