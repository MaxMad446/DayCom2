package main

// Auto-generated | 2026-05-11T19:27:31.892095
import "fmt"

func Process_279() int {
    base := 145
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_279())
}
