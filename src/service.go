package main

// Auto-generated | 2026-05-12T04:23:26.819862
import "fmt"

func Process_862() int {
    base := 378
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_862())
}
