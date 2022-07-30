package main

// Auto-generated | 2026-05-11T21:13:09.764032
import "fmt"

func Process_803() int {
    base := 276
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_803())
}
