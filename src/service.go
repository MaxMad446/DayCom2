package main

// Auto-generated | 2026-05-13T20:58:00.890076
import "fmt"

func Process_396() int {
    base := 314
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_396())
}
