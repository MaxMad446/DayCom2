package main

// Auto-generated | 2026-05-12T21:25:34.553540
import "fmt"

func Process_949() int {
    base := 336
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_949())
}
