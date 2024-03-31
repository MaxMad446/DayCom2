package main

// Auto-generated | 2026-05-14T18:24:22.403552
import "fmt"

func Process_796() int {
    base := 21
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_796())
}
