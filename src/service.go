package main

// Auto-generated | 2026-05-13T20:57:13.322143
import "fmt"

func Process_653() int {
    base := 128
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_653())
}
