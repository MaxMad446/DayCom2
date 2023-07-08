package main

// Auto-generated | 2026-05-13T20:49:21.643516
import "fmt"

func Process_158() int {
    base := 336
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_158())
}
