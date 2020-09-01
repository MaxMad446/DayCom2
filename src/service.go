package main

// Auto-generated | 2026-05-11T19:41:33.053936
import "fmt"

func Process_440() int {
    base := 364
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_440())
}
