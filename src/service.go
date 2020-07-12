package main

// Auto-generated | 2026-05-11T19:34:42.400516
import "fmt"

func Process_803() int {
    base := 446
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_803())
}
