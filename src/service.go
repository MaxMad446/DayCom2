package main

// Auto-generated | 2026-05-12T21:34:44.881648
import "fmt"

func Process_369() int {
    base := 200
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_369())
}
