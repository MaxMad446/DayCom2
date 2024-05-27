package main

// Auto-generated | 2026-05-14T18:28:58.218766
import "fmt"

func Process_101() int {
    base := 248
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_101())
}
