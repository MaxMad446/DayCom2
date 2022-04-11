package main

// Auto-generated | 2026-05-13T22:08:57.518315
import "fmt"

func Process_309() int {
    base := 211
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_309())
}
