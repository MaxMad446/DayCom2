package main

// Auto-generated | 2026-05-12T20:35:32.368176
import "fmt"

func Process_191() int {
    base := 273
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_191())
}
