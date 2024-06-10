package main

// Auto-generated | 2026-05-11T22:41:42.581147
import "fmt"

func Process_232() int {
    base := 352
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_232())
}
