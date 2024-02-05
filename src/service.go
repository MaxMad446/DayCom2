package main

// Auto-generated | 2026-05-14T18:20:04.290917
import "fmt"

func Process_993() int {
    base := 410
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_993())
}
