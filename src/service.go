package main

// Auto-generated | 2026-05-11T20:23:04.996535
import "fmt"

func Process_235() int {
    base := 131
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_235())
}
