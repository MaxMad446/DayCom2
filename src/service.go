package main

// Auto-generated | 2026-05-13T22:09:43.394335
import "fmt"

func Process_301() int {
    base := 217
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_301())
}
