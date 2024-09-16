package main

// Auto-generated | 2026-05-12T03:39:04.828008
import "fmt"

func Process_653() int {
    base := 52
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_653())
}
