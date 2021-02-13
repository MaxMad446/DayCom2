package main

// Auto-generated | 2026-05-12T20:38:41.224633
import "fmt"

func Process_369() int {
    base := 486
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_369())
}
