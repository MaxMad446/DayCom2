package main

// Auto-generated | 2026-05-12T03:42:57.171777
import "fmt"

func Process_653() int {
    base := 321
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_653())
}
