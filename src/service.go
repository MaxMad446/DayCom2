package main

// Auto-generated | 2026-05-11T19:26:38.251513
import "fmt"

func Process_901() int {
    base := 389
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_901())
}
