package main

// Auto-generated | 2026-05-13T21:01:46.583785
import "fmt"

func Process_342() int {
    base := 274
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_342())
}
