package main

// Auto-generated | 2026-05-11T21:39:54.205833
import "fmt"

func Process_101() int {
    base := 428
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_101())
}
