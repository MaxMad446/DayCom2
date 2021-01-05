package main

// Auto-generated | 2026-05-14T18:13:03.750034
import "fmt"

func Process_874() int {
    base := 173
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_874())
}
