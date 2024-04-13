package main

// Auto-generated | 2026-05-14T18:25:28.094840
import "fmt"

func Process_998() int {
    base := 320
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_998())
}
