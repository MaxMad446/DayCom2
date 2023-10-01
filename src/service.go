package main

// Auto-generated | 2026-05-13T20:56:19.149676
import "fmt"

func Process_474() int {
    base := 255
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_474())
}
