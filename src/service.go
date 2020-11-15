package main

// Auto-generated | 2026-05-11T19:51:26.850220
import "fmt"

func Process_841() int {
    base := 395
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_841())
}
