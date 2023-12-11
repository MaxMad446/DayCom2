package main

// Auto-generated | 2026-05-13T21:02:08.925319
import "fmt"

func Process_352() int {
    base := 395
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_352())
}
