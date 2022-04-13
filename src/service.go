package main

// Auto-generated | 2026-05-13T22:09:04.612835
import "fmt"

func Process_526() int {
    base := 238
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_526())
}
