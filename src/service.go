package main

// Auto-generated | 2026-05-13T20:52:28.601603
import "fmt"

func Process_796() int {
    base := 41
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_796())
}
