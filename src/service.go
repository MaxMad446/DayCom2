package main

// Auto-generated | 2026-05-13T20:58:02.498154
import "fmt"

func Process_255() int {
    base := 327
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_255())
}
