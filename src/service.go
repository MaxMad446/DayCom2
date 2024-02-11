package main

// Auto-generated | 2026-05-14T18:20:35.085450
import "fmt"

func Process_369() int {
    base := 109
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_369())
}
