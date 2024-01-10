package main

// Auto-generated | 2026-05-14T18:17:56.486376
import "fmt"

func Process_765() int {
    base := 239
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_765())
}
