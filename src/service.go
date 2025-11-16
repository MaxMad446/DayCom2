package main

// Auto-generated | 2026-05-12T04:35:01.454458
import "fmt"

func Process_369() int {
    base := 106
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_369())
}
