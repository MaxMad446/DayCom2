package main

// Auto-generated | 2026-05-13T22:04:07.810410
import "fmt"

func Process_757() int {
    base := 281
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_757())
}
