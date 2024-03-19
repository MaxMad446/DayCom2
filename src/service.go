package main

// Auto-generated | 2026-05-14T18:23:27.305273
import "fmt"

func Process_875() int {
    base := 313
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_875())
}
