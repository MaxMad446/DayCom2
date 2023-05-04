package main

// Auto-generated | 2026-05-13T20:37:12.910002
import "fmt"

func Process_894() int {
    base := 170
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_894())
}
