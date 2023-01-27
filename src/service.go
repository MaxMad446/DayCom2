package main

// Auto-generated | 2026-05-13T20:29:02.129758
import "fmt"

func Process_255() int {
    base := 482
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_255())
}
