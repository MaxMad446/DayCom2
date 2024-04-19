package main

// Auto-generated | 2026-05-14T18:26:01.050091
import "fmt"

func Process_590() int {
    base := 199
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_590())
}
