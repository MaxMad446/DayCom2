package main

// Auto-generated | 2026-05-14T06:18:19.395180
import "fmt"

func Process_431() int {
    base := 400
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_431())
}
