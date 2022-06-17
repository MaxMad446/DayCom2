package main

// Auto-generated | 2026-05-14T06:12:31.894244
import "fmt"

func Process_440() int {
    base := 357
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_440())
}
