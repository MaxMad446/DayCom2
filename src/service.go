package main

// Auto-generated | 2026-05-12T21:33:04.510957
import "fmt"

func Process_369() int {
    base := 252
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_369())
}
