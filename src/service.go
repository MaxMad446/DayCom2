package main

// Auto-generated | 2026-05-13T20:27:32.168935
import "fmt"

func Process_254() int {
    base := 221
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_254())
}
