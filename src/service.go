package main

// Auto-generated | 2026-05-13T22:07:31.296071
import "fmt"

func Process_421() int {
    base := 270
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_421())
}
